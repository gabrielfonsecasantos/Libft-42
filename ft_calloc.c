/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:01:36 by gabriel           #+#    #+#             */
/*   Updated: 2026/06/03 15:45:22 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_calloc(size_t nmemb, size_t size)
{
  unsigned char  *ptr;
  size_t  i;
  
  if (nmemb * size > 2147483647)
    return (NULL);
  if (nmemb == 0 || size == 0)
  {
   ptr = malloc(1);
   return (ptr); 
  }
  ptr = malloc(nmemb * size);
  if (!ptr)
    return (NULL);
  i = 0;
  while (i < nmemb * size)
  {
    ptr[i] = '\0';
    i++;
  }
  return ((void *)ptr);
}

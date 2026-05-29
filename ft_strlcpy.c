/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:05:03 by gabriel           #+#    #+#             */
/*   Updated: 2026/05/27 12:15:22 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
  int i;
  
  size = size - 1;
  i = 0;
  while (i < size)
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return (size + 1);
}
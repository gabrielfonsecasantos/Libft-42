/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:28:52 by gabriel           #+#    #+#             */
/*   Updated: 2026/05/27 13:14:22 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_strlen_cat(const char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
  size_t  i;
  size_t  j;
  size_t  dst_len;
  
  dst_len = ft_strlen_cat(dst);
  i = dst_len;
  j = 0;  
  while (i < size - 1 && src[j])
  {
    dst[i] = src[j];
    i++;
    j++;
  }
  dst[i] = '\0';
  return (dst_len + ft_strlen_cat(src));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gviniciu <gviniciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:18:48 by gabriel           #+#    #+#             */
/*   Updated: 2026/05/28 17:31:20 by gviniciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;
	char	*temp_arr;

	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	i = 0;
	while (i < n)
	{
		temp_arr[i] = ptr_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = temp_arr[i];
		i++;
	}
	return (dest);
}

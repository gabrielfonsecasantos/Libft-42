/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gviniciu <gviniciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 18:59:40 by gviniciu          #+#    #+#             */
/*   Updated: 2026/06/02 19:12:49 by gviniciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	size;
	char	*str;

	str = (char *)s;
	size = ft_strlen(str) + 1;
	str += size - 1;
	i = size;
	while (i > 0)
	{
		if (*str == (char)c)
			return (str);
		str--;
		i--;
	}
	return (NULL);
}

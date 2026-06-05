/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gviniciu <gviniciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 12:27:42 by gviniciu          #+#    #+#             */
/*   Updated: 2026/06/05 12:59:38 by gviniciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*str;
	char	*ptr_s1;
	char	*ptr_s2;

	ptr_s1 = (char *)s1;
	ptr_s2 = (char *)s2;
	if (!ptr_s1 || !ptr_s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, ptr_s1, ft_strlen(ptr_s1) + 1);
	ft_strlcat(str, ptr_s2, size + 1);
	return (str);
}

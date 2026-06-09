/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:38:56 by gviniciu          #+#    #+#             */
/*   Updated: 2026/06/09 20:28:42 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_counter(char *str, char c)
{
	size_t	counter;
	size_t	i;

	counter = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
			if (i == 0 || str[i - 1] == c)
				counter++;
		i++;
	}
	return (counter);
}

size_t	ft_char_counter(char *str, char c)
{
	size_t	counter;

	counter = 0;
	while (str[counter] != '\0' && str[counter] != c)
		counter++;
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	words = ft_word_counter((char *)s, c);
	arr = malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	while (i < words)
	{
		while (*s == c)
			s++;
		arr[i] = ft_substr((char *)s, 0, ft_char_counter((char *)s, c));
		s += ft_char_counter((char *)s, c);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

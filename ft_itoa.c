/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:16:44 by gviniciu          #+#    #+#             */
/*   Updated: 2026/06/09 20:32:14 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_get_string_size(long num)
{
	int		counter;
	long	size;

	counter = 0;
	if (num <= 0)
	{
		counter++;
		if (num < 0)
			num *= -1;
	}
	size = num;
	while (size > 0)
	{
		size /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		counter;
	int		i;
	long	num;

	num = n;
	counter = ft_get_string_size(num);
	res = malloc(sizeof(char) * (counter + 1));
	if (!res)
		return (NULL);
	res[counter] = '\0';
	i = counter - 1;
	if (num < 0)
		num *= -1;
	while (i >= 0)
	{
		if (i == 0 && n < 0)
			break ;
		res[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

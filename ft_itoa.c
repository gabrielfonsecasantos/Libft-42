/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gviniciu <gviniciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:16:44 by gviniciu          #+#    #+#             */
/*   Updated: 2026/06/05 17:51:42 by gviniciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	*res;
	int		counter;
	int		i;
	int		size;
    long     num;
	
    num = n;
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
		size = size / 10;
		counter++;
	}
	res = malloc(sizeof(char) * (counter + 1));
	if (!res)
		return (NULL);
	res[counter] = '\0';
	i = counter - 1;
	while (i >= 0)
	{
		res[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

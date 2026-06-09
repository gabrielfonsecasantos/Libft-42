/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 16:54:08 by gviniciu          #+#    #+#             */
/*   Updated: 2026/06/09 18:15:23 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	char	*ptr;
	int		i;
	int		sign;
	int		res;

	ptr = (char *)nptr;
	sign = 1;
	i = 0;
	res = 0;
	while ((ptr[i] >= 9 && ptr[i] <= 13) || ptr[i] == 32)
		i++;
	if (ptr[i] == '+' || ptr[i] == '-')
	{
		if (ptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (ptr[i] >= 48 && ptr[i] <= 57)
	{
		res = res * 10 + (ptr[i] - '0');
		i++;
	}
	return (res * sign);
}

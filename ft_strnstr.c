/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:14:59 by gviniciu          #+#    #+#             */
/*   Updated: 2026/06/03 14:54:19 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    char    *str;
    char    *str_big;
    
     if (*little == '\0')
        return ((char *)big);
    if (!big && len == 0)
        return (NULL);
    i = 0;
    while (big[i] && i < len)
    {
        j = 0;
        while (little[j] == big[i + j] && (i + j) < len)
        {
            if (little[j + 1] == '\0')
                return ((char *)&big[i]);
            j++;
        }
        i++;   
    }
    return (NULL);
}

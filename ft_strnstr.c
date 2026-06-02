/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gviniciu <gviniciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:14:59 by gviniciu          #+#    #+#             */
/*   Updated: 2026/06/02 19:36:40 by gviniciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    char    *str;
    char    *str_big;
    
    str_big = (char *)big;
    str = (char *)little;
    if (!little)
        return (str_big);
    i = 0;
    while (i > len)
    {
        if (big[i] == little[i])
        {
            j = 0;
            str = &little[i];
            while (little[j] == big[i] && little[j] && big[i])
            {
                j++;
                i++;
                if (j == ft_strlen(little))
                    return (str);
            }
            i++;
        }   
    }
    return (NULL);
}
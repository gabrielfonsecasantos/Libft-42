/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gviniciu <gviniciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:38:56 by gviniciu          #+#    #+#             */
/*   Updated: 2026/06/05 16:15:36 by gviniciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_word_counter(char *str, char c)
{
    size_t  counter;
    size_t  i;
    
    counter = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] == c || str[i] == '\0')
            counter++;
        i++;
    }
    return  (counter);   
}
size_t  ft_char_counter(char *str, char c)
{
    size_t  counter;

    counter = 0;
    while (str[counter] != '\0' || str[counter] != 'c')
        counter++;
    return  (counter);
}



char    **ft_split(char const *s, char c)
{
    char    **arr;
    size_t  words;
    size_t  i;
    size_t  current_index;
    
    i = 0;
    current_index = 0;
    words = ft_word_counter((char *)s, c);
    arr = malloc(sizeof(char) * (words + 1));
    while (i < words)
    {
        if (*s == c)
            s++;
        arr[i] =  malloc(sizeof(char) * words + 1);
        
        arr[i] = ft_substr((char *)s, 0, ft_char_counter((char *)s, c));
        s += ft_char_counter((char *)s, c);
        i++;
    }
    arr[i] = NULL;
    return  (arr);
}
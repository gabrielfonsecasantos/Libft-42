/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 00:07:18 by gabriel           #+#    #+#             */
/*   Updated: 2026/06/10 00:43:58 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
  t_list  **new_lst;
  t_list  *new_node;
  int size;
  
  if (!lst || !f || !del)
    return (NULL);
  size = ft_lstsize(lst);
  new_lst = malloc(sizeof(t_list) * size);
  if (!new_lst)
    return (NULL);
  new_node = *new_lst;
  while (lst && new_node)
  {
    (*f)(lst->content);
    
  }
  return (*new_lst);
}

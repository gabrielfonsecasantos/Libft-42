/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 23:10:56 by gabriel           #+#    #+#             */
/*   Updated: 2026/06/09 23:40:40 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  ft_lstadd_back(t_list **lst, t_list *new)
{
  t_list  *current;

  if (!lst || !new)
    return ;
  if (!*lst)
  {
    *lst = new;
    return ;
  }
  current = *lst;
  while (current->next)
    current = current->next;
  current->next = new;
}

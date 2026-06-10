/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 23:43:20 by gabriel           #+#    #+#             */
/*   Updated: 2026/06/09 23:59:54 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  ft_lstdelone(t_list *lst, void (*del)(void
*))
{
  if (!lst || !del)
    return ;
  (*del)(lst->content);
  free(lst);
}
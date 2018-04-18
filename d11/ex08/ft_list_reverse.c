/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:13:16 by wawong            #+#    #+#             */
/*   Updated: 2018/03/27 16:54:10 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_reverse(t_list **begin_list)
{
	t_list	*current;
	t_list	*pre;
	t_list	*next;

	current = *begin_list;
	pre = 0;
	while (current)
	{
		next = current->next;
		current->next = pre;
		pre = current;
		current = next;
	}
	*begin_list = pre;
}

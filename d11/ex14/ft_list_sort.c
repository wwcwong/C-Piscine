/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 12:17:21 by wawong            #+#    #+#             */
/*   Updated: 2018/03/28 12:35:50 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*temp;
	t_list	*new;

	temp = *begin_list;
	if (!(*begin_list) || !((*begin_list)->next))
		return ;
	while (temp->next)
	{
		if (cmp(temp->data, temp->next->data) > 0)
		{
			new = temp->data;
			temp->data = temp->next->data;
			temp->next->data = new;
			temp = *begin_list;
		}
		else
			temp = temp->next;
	}
}

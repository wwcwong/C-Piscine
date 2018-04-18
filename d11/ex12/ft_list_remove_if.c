/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:13:54 by wawong            #+#    #+#             */
/*   Updated: 2018/03/28 11:51:15 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*temp;
	t_list	*pre;

	if (!(*begin_list))
		return ;
	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		pre = *begin_list;
		free(pre);
		(*begin_list) = (*begin_list)->next;
	}
	temp = *begin_list;
	while (temp)
	{
		if (cmp(temp->data, data_ref) != 0)
			pre = temp;
		else
		{
			pre->next = temp->next;
			free(temp);
		}
		temp = temp->next;
	}
}

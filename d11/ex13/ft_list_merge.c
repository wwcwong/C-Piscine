/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:15:11 by wawong            #+#    #+#             */
/*   Updated: 2018/03/28 12:15:34 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*temp;

	if (!*begin_list1)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	temp = *begin_list1;
	while (temp->next)
		temp = temp->next;
	temp->next = begin_list2;
}

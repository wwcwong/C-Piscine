/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 12:38:18 by wawong            #+#    #+#             */
/*   Updated: 2018/03/28 13:21:44 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*temp;
	t_list	*new;

	new = 0;
	temp = begin_list;
	if (!temp || !(temp->next))
		return ;
	while (temp)
	{
		new = temp->data;
		temp->data = (temp->next)->data;
		(temp->next)->data = new;
		temp = temp->next;
	}

}

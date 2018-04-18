/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 13:18:57 by wawong            #+#    #+#             */
/*   Updated: 2018/03/27 14:03:46 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data);

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*temp;
	t_list	*new;

	temp = *begin_list;
	new = ft_create_elem(data);
	if (temp)
	{
		while (temp->next != 0)
			temp = temp->next;
		temp->next = new;
	}
	else
		*begin_list = new;
}

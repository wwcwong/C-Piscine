/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:12:24 by wawong            #+#    #+#             */
/*   Updated: 2018/03/27 15:06:40 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data);

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*temp;
	t_list	*new;

	temp = *begin_list;
	new = ft_create_elem(data);
	if (*begin_list)
	{
		temp = new;
		new->next = *begin_list;
		*begin_list = temp;
	}
	*begin_list = new;
}

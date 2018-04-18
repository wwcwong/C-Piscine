/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:33:39 by wawong            #+#    #+#             */
/*   Updated: 2018/03/27 17:07:45 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp) ())
{
	t_list	*temp;

	temp = begin_list;
	while (temp)
	{
		if ((*cmp)(temp->data, data_ref) == 0)
			(*f)(temp->data);
		temp = temp->next;
	}
}

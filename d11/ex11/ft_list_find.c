/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:09:28 by wawong            #+#    #+#             */
/*   Updated: 2018/03/27 17:13:13 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*temp;

	temp = begin_list;
	while (temp)
	{
		if ((*cmp)(temp->data, data_ref) == 0)
			return (temp);
		temp = temp->next;
	}
	return (0);
}

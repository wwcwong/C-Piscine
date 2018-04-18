/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:16:26 by wawong            #+#    #+#             */
/*   Updated: 2018/03/27 15:26:41 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list	*temp;

	temp = begin_list;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		return (temp);
	}
	return (begin_list);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:04:43 by wawong            #+#    #+#             */
/*   Updated: 2018/03/27 16:12:00 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	count;
	t_list			*temp;

	count = 0;
	temp = begin_list;
	while (temp)
	{
		if (count == nbr)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (temp);
}

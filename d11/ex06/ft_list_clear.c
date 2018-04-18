/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:40:09 by wawong            #+#    #+#             */
/*   Updated: 2018/03/27 16:04:13 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*temp;
	t_list	*temp1;

	temp = *begin_list;
	while (temp)
	{
		temp1 = temp->next;
		free(temp);
		temp = temp1;
	}
	*begin_list = 0;
	begin_list = 0;
}

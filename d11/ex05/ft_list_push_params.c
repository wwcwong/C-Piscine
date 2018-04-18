/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:27:53 by wawong            #+#    #+#             */
/*   Updated: 2018/03/27 15:39:18 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data);

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*new_elem;
	t_list	*new_list;

	i = 0;
	new_list = 0;
	while (i < ac)
	{
		new_elem = ft_create_elem(av[i]);
		new_elem->next = new_list;
		new_list = new_elem;
		i++;
	}
	return (new_elem);
}

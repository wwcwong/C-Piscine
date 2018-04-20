/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acakste <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 08:42:14 by acakste           #+#    #+#             */
/*   Updated: 2018/04/04 19:34:05 by acakste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void	free_mem(t_list **array, t_info *map)
{
	t_list	*temp;

	while (map->height > 0)
	{
		while (array[map->height - 1])
		{
			temp = array[map->height - 1];
			array[map->height - 1] = array[map->height - 1]->next;
			free(temp);
		}
		map->height--;
	}
	free(array);
	free(map);
}

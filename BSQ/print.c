/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 01:39:16 by wawong            #+#    #+#             */
/*   Updated: 2018/04/04 19:34:00 by acakste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void			print_row(t_list *array, t_placement box,
	t_info map, int special)
{
	t_list		*trav;
	int			x;
	int			i;

	x = 0;
	i = 0;
	trav = array;
	while (x < map.width)
	{
		if (trav && x == trav->x[i])
		{
			((x >= box.x && x < (box.x + box.size))
				&& special == 1 && map.switched == 1)
				? write(1, &map.box, 1) : write(1, &map.obs, 1);
			if (++i == 10)
			{
				i = 0;
				trav = trav->next;
			}
		}
		else
			(special == 1 && (x >= box.x && x < (box.x + box.size)))
				? write(1, &map.box, 1) : write(1, &map.open, 1);
		x++;
	}
}

void			print(t_list **array, t_placement box, t_info *map)
{
	int y;

	y = 0;
	while (y < map->height)
	{
		if (y == 1 && map->switched == 1)
			switch_chars(map);
		if (y >= box.y && y < (box.y + box.size))
		{
			print_row(array[y], box, *map, 1);
		}
		else
			print_row(array[y], box, *map, 0);
		write(1, "\n", 1);
		y++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acakste <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 15:25:12 by acakste           #+#    #+#             */
/*   Updated: 2018/04/04 23:36:43 by acakste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int				check_row(t_list *array, int x, int x2)
{
	t_list		*trav;
	int			i;

	trav = array;
	if (trav == NULL)
	{
		return (1);
	}
	i = 0;
	while (trav != NULL && x2 > trav->x[i])
	{
		if (trav->x[i] >= x && trav->x[i] < x2)
			return (0);
		i++;
		if (i == 10)
		{
			trav = trav->next;
			i = 0;
		}
	}
	return (1);
}

int				check_row2(t_list *array, int x, int x2)
{
	t_list		*trav;
	int			i;
	int			j;

	trav = array;
	if (trav == NULL)
		return (0);
	i = 0;
	while (trav != NULL && x > trav->x[i])
		if (++i == 10)
		{
			trav = trav->next;
			i = 0;
		}
	j = 0;
	while (trav != NULL && trav->x[i] < x2 && trav->x[i] != -1)
	{
		if (++i == 10)
		{
			trav = trav->next;
			i = 0;
		}
		j++;
	}
	return ((j == (x2 - x)) ? 1 : 0);
}

int				check_placement(t_placement try, t_list **array, int switched)
{
	int i;
	int result;

	i = try.y;
	while (i < try.y + try.size)
	{
		if (i != 0 && switched == 1)
			result = check_row2(array[i], try.x, (try.x + try.size));
		else
			result = check_row(array[i], try.x, (try.x + try.size));
		if (result == 0)
			return (0);
		i++;
	}
	return (1);
}

t_placement		solve(t_info *map, t_list **array)
{
	t_placement try;
	t_placement	res;

	try.size = 0;
	try.y = 0;
	while (try.y <= map->height - try.size)
	{
		try.x = 0;
		while (try.x <= map->width - try.size)
		{
			while ((try.x + try.size <= map->width)
					&& (try.y + try.size <= map->height)
					&& check_placement(try, array, map->switched) == 1)
			{
				res.x = try.x;
				res.y = try.y;
				res.size = try.size;
				try.size = try.size + 1;
			}
			try.x += 1;
		}
		try.y += 1;
	}
	return (res);
}

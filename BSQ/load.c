/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acakste <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 08:39:47 by acakste           #+#    #+#             */
/*   Updated: 2018/04/04 20:49:14 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

t_list		*ft_create_list_elem(int x)
{
	t_list		*new;
	int			i;

	new = NULL;
	while (new == NULL)
		new = (t_list*)malloc(sizeof(t_list));
	new->next = NULL;
	i = 1;
	while (i < 10)
	{
		new->x[i] = -1;
		i++;
	}
	new->x[0] = x;
	return (new);
}

t_list		**ft_array_index(int size)
{
	t_list	**array;
	int		i;

	if (size == 0)
		return (error());
	array = NULL;
	while (array == NULL)
		array = (t_list**)malloc(sizeof(t_list*) * size);
	i = 0;
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}
	return (array);
}

void		ft_list_push_back(t_list **begin_list, int x)
{
	t_list	*new;
	t_list	**trav;
	short	i;

	trav = begin_list;
	if (*trav == NULL)
	{
		new = ft_create_list_elem(x);
		*trav = new;
		return ;
	}
	while (*trav && (*trav)->next)
		trav = &(*trav)->next;
	i = 0;
	while ((*trav)->x[i] != -1 && i < 10)
		i++;
	if (i != 10)
		(*trav)->x[i] = x;
	else
	{
		new = ft_create_list_elem(x);
		(*trav)->next = new;
	}
}

void		switch_chars(t_info *map)
{
	char	temp;

	temp = map->obs;
	map->obs = map->open;
	map->open = temp;
	map->switched = 1;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acakste <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 08:27:53 by acakste           #+#    #+#             */
/*   Updated: 2018/04/04 23:17:41 by acakste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int		g_n;
int		g_fp;
int		g_x;
int		g_y;
int		g_obs;

void		support_main(void)
{
	t_info			*map;
	t_list			**array;
	t_placement		res;

	map = get_info(g_fp);
	array = ft_array_index(map->height);
	map = load_struct(g_fp, map, array);
	if (map != 0 && array != 0)
	{
		res = solve(map, array);
		(res.size > 0) ? print(array, res, map) : error();
		free_mem(array, map);
	}
}

int			main(int argc, char **argv)
{
	g_n = (argc == 1) ? 0 : 1;
	while ((g_n)++ < argc)
	{
		g_fp = (argc > 1) ? open(argv[g_n - 1], O_RDONLY) : 0;
		if (g_fp != -1)
		{
			support_main();
			close(g_fp);
		}
		else
			error();
		if (g_n < argc)
			ft_putchar('\n');
	}
	return (0);
}

int			for_read(t_info *map, t_list **array, char c)
{
	if (g_y == 1 && g_x == 0 && (map->width / 2) < g_obs)
		switch_chars(map);
	if (g_y >= map->height)
		return (-1);
	if (c == (map->obs))
	{
		ft_list_push_back(&array[g_y], g_x);
		if (g_y == 0)
			(g_obs)++;
	}
	else if (c == '\n')
	{
		if (g_y == 0)
			map->width = g_x;
		if ((g_x = g_x - map->width))
			return (-1);
		(g_y)++;
		g_x = 0;
	}
	else if (c != (map->open))
		return (-1);
	if (c != '\n')
		(g_x)++;
	return (g_obs);
}

t_info		*load_struct(int fp, t_info *map, t_list **array)
{
	char	buff[1];
	int		num_obs;

	g_x = 0;
	g_y = 0;
	g_obs = 0;
	if (map->height <= 0 || array == 0)
		return (0);
	while ((read(fp, buff, 1) == 1))
	{
		num_obs = for_read(map, array, buff[0]);
		if (num_obs == -1)
			return (error());
	}
	if (g_y <= map->height - 1)
		return (error());
	if (map->width / 2 < num_obs)
		switch_chars(map);
	return (map);
}

t_info		*get_info(int fp)
{
	int		i;
	int		len;
	char	buff[1];
	char	info[12];
	t_info	*map;

	map = (t_info*)malloc(sizeof(t_info));
	i = 0;
	while (read(fp, buff, 1) && buff[0] != '\n' && i < 11)
		info[i++] = buff[0];
	info[i] = '\0';
	len = ft_strlen(info) - 3;
	if (len < 1 || (info[0] < '0' || info[0] > '9'))
		map->height = 0;
	else
	{
		map->open = info[len];
		map->obs = info[len + 1];
		map->box = info[len + 2];
		map->switched = 0;
		info[len] = '\0';
		map->height = ft_atoi_special(info);
	}
	return (map);
}

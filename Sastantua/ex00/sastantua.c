/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 18:48:01 by wawong            #+#    #+#             */
/*   Updated: 2018/03/18 19:03:44 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);
int		print_doorknob_line(int door_size);
int		bottom_star(int n);

void	write_line(int star_num, int blank_num)
{
	while (0 < blank_num)
	{
		ft_putchar(' ');
		blank_num--;
	}
	ft_putchar('/');
	while (0 < star_num)
	{
		ft_putchar('*');
		star_num--;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

int		cal_line(int size)
{
	int i;
	int j;
	int line;

	i = 0;
	j = 0;
	line = 0;
	while (i < size)
	{
		line += j;
		i++;
		j++;
	}
	return (line + (3 * size));
}

void	print_door(int door_size, int stars, int spaces)
{
	int i;
	int j;
	int k;

	if (spaces == -1)
		return ;
	k = 0;
	i = 0;
	j = 0;
	while (i < spaces)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
	while (j++ < (stars - door_size / 2))
		ft_putchar('*');
	while (k < door_size)
	{
		if (door_size / 2 == spaces && door_size > 3)
		{
			print_doorknob_line(door_size);
			break ;
		}
		ft_putchar('|');
		k++;
	}
	j = 0;
	while (j++ < (stars - door_size / 2))
		ft_putchar('*');
	ft_putchar('\\');
	ft_putchar('\n');
	print_door(door_size, (stars + 1), (spaces - 1));
}

int		print_doorknob_line(int door_size)
{
	int k;

	k = 0;
	while (k < door_size)
	{
		if (k == (door_size - 2))
		{
			ft_putchar('$');
		}
		else
		{
			ft_putchar('|');
		}
		k++;
	}
	return (0);
}

void	sastantua(int size)
{
	int curr_line;
	int curr_level;
	int stars;
	int spaces;
	int add_stars;
	int door_size;

	door_size = 1;
	spaces = bottom_star(size);
	stars = 0;
	add_stars = 1;
	curr_level = 1;
	curr_line = 0;
	while (curr_level <= size)
	{
		if ((cal_line(size) - curr_line) == door_size)
		{
			print_door(door_size, stars, spaces);
			break ;
		}
		write_line(stars * 2 + 1, (spaces));
		stars++;
		curr_line++;
		spaces--;
		if (curr_line == cal_line(curr_level))
		{
			if (curr_level % 2 == 1)
				add_stars++;
			else
				door_size = curr_level + 1;
			stars += add_stars;
			spaces -= add_stars;
			curr_level++;
		}
	}
}

int		bottom_star(int n)
{
	int sum;
	int i;
	int x;

	sum = 2;
	x = 6;
	i = 1;
	while (i < n)
	{
		sum += x;
		if (i % 2 == 1)
			x += 1;
		else
			x += 2;
		i++;
	}
	return (sum);
}

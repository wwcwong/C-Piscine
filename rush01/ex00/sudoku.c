/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 01:30:06 by wawong            #+#    #+#             */
/*   Updated: 2018/03/25 16:16:18 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <stdlib.h>
#include <unistd.h>

int		checkargs(int argc, char *argv[])
{
	int		num;
	int		numarg;
	char	*t;

	num = 0;
	numarg = 1;
	if (argc != 10)
		return (0);
	else
	{
		while ((argv[numarg++]))
		{
			t = argv[numarg - 1];
			num = 0;
			while (t[num])
			{
				if (!((t[num] <= '9' && t[num] >= '1') || t[num] == '.'))
					return (0);
				num++;
			}
			if (num != 9)
				return (0);
		}
		return (1);
	}
}

int		**create(char **argv)
{
	int **puzzle;
	int i;
	int j;

	i = 0;
	puzzle = (int **)malloc(sizeof(int *) * 10);
	while (i < 9)
	{
		puzzle[i] = (int *)malloc(sizeof(int) * 10);
		i++;
	}
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			puzzle[i][j] = (argv[i + 1][j] - 48);
			if (argv[i + 1][j] == '.')
				puzzle[i][j] += 2;
			j++;
		}
		i++;
	}
	return (puzzle);
}

void	print(int **puzzle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			ft_putchar(puzzle[i][j] + 48);
			if (j < 9 - 1)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

int		find_loc(int *row, int *col, int **puzzle)
{
	*row = 0;
	while (*row < 9)
	{
		*col = 0;
		while (*col < 9)
		{
			if (puzzle[*row][*col] == 0)
				return (1);
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}

int		solve(int **puzzle)
{
	int row;
	int col;
	int num;

	if (!find_loc(&row, &col, puzzle))
		return (1);
	num = 1;
	while (num <= 9)
	{
		if (safe(row, col, num, puzzle))
		{
			puzzle[row][col] = num;
			if (solve(puzzle))
				return (1);
			puzzle[row][col] = 0;
		}
		num++;
	}
	return (0);
}

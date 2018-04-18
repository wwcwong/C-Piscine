/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 13:51:12 by wawong            #+#    #+#             */
/*   Updated: 2018/03/25 16:12:45 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_row(int row, int num, int **puzzle)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (puzzle[row][i] == num)
			return (0);
		i++;
	}
	return (1);
}

int		check_col(int column, int num, int **puzzle)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (puzzle[i][column] == num)
			return (0);
		i++;
	}
	return (1);
}

int		check_box(int row, int column, int num, int **puzzle)
{
	int box_row;
	int box_col;
	int i;
	int j;

	i = 0;
	j = 0;
	box_row = row - row % 3;
	box_col = column - column % 3;
	while (i < 3)
	{
		while (j < 3)
		{
			if (puzzle[box_row + i][box_col + j] == num)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int		safe(int row, int column, int num, int **puzzle)
{
	if (!check_row(row, num, puzzle))
		return (0);
	if (!check_col(column, num, puzzle))
		return (0);
	if (!check_box(row, column, num, puzzle))
		return (0);
	return (1);
}

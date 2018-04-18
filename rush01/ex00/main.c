/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 13:44:51 by wawong            #+#    #+#             */
/*   Updated: 2018/03/25 16:13:16 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudoku.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int **puzzle;

	if (!checkargs(argc, argv))
	{
		ft_putstr("Error");
		return (1);
	}
	puzzle = create(argv);
	solve(puzzle);
	print(puzzle);
	return (0);
}

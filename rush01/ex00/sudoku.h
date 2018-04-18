/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 14:08:08 by wawong            #+#    #+#             */
/*   Updated: 2018/03/25 16:16:41 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
int		check_row(int row, int num, int **puzzle);
int		check_col(int column, int num, int **puzzle);
int		check_box(int row, int column, int num, int **puzzle);
int		safe(int row, int column, int num, int **puzzle);
int		checkargs(int argc, char *argv[]);
int		**create(char **argv);
void	print(int **puzzle);
int		find_loc(int *row, int *col, int **puzzle);
int		solve(int **puzzle);

#endif

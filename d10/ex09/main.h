/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 16:36:59 by wawong            #+#    #+#             */
/*   Updated: 2018/03/27 23:08:01 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include "ft_opp.h"
typedef int (*t_f) (int, int);

typedef struct	s_opp
{
	char	*op;
	t_f		fn;
}				t_opp;

void	spc(const char *c, int *count);
int		ft_atoi(char *str);
int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mult(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		check(int argc, char sign, char **argv);
void	do_math(char sign, char **argv);
#endif

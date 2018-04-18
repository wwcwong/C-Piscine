/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 16:36:59 by wawong            #+#    #+#             */
/*   Updated: 2018/03/26 20:05:23 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>

void	spc(const char *c, int *count);
int		ft_atoi(char *str);
int		add(int a, int b);
int		sub(int a, int b);
int		mult(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		check(int argc, char sign, char **argv);
void	do_math(char sign, char **argv);
#endif

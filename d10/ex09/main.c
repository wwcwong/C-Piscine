/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 16:40:37 by wawong            #+#    #+#             */
/*   Updated: 2018/03/27 23:06:06 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "main.h"
#include "t_opp.h"

int		main(int argc, char **argv)
{
	char	sign;
	int		a;
	int		b;

	a = 0;
	sign = argv[2][0];
	b = check(argc, sign, argv);
	if (b == 0)
	{
		ft_putnbr(a);
		ft_putchar('\n');
		return (0);
	}
	do_math(sign, argv);
	return (0);
}

void	do_math(char sign, char **argv)
{
	int a;

	a = 0;
	a = g_opptan[op_value].fn(ft_atoi(argv[1]), ft_atoi(argv[3]));
	ft_putnbr(a);
	ft_putchar('\n');
}

int		check(int argc, char sign, char **argv)
{
	sign = argv[2][0];
	if (argv[2][1] != '\0')
		return (0);
	if (argc != 4 || argv[2][1] != '\0')
		return (0);
	if (sign == '/' && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : division by zero", 23);
		return (0);
	}
	if (sign == '%' && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return (0);
	}
	return (1);
}

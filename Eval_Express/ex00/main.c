/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 06:22:16 by wawong            #+#    #+#             */
/*   Updated: 2018/04/01 16:39:04 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "eval.h"
#include "math.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int j;

	j = -2147483647;
	if (nb < j)
	{
		ft_putnbr(nb / 10);
		ft_putnbr((unsigned int)nb % 10);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr((unsigned int)nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	rm_space(char *source)
{
	char	*i;
	char	*j;

	i = source;
	j = source;
	while (*j != 0)
	{
		*i = *j++;
		if (*i != ' ')
			i++;
	}
	*i = '*';
	*(++i) = '1';
	*(++i) = '\0';
}

int		eval_expr(char *av)
{
	t_formula	postfix;
	char		*form;
	int			res;

	form = av;
	rm_space(form);
	postfix = to_postfix(form);
	res = result(postfix);
	return (res);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}

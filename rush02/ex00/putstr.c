/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlobo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 16:41:51 by brlobo-a          #+#    #+#             */
/*   Updated: 2018/04/01 18:57:46 by brlobo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int nb);

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		putchar(str[i]);
}

void	print_dim(int w, int h)
{

	putchar('[');
	putnbr(w);
	putstr("] [");
	putnbr(h);
	putchar(']');
}

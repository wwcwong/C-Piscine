/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlobo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 16:39:26 by brlobo-a          #+#    #+#             */
/*   Updated: 2018/04/01 19:01:13 by brlobo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	crunch(int nb);
void	putchar(char c);

void	putnbr(int nb)
{
	if (nb < 0)
		putchar('-');
	crunch(nb);
}

void	crunch(int nb)
{
	int temp;

	temp = nb % 10;
	if (nb >= 10 || nb <= -10)
		crunch(nb / 10);
	if (nb < 0)
		putchar((temp * -1) + '0');
	else
		putchar(temp + '0');
}

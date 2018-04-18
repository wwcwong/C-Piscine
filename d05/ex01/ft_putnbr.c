/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 10:28:06 by wawong            #+#    #+#             */
/*   Updated: 2018/03/19 13:14:07 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
	{
		ft_putchar(nb + '0');
	}
}

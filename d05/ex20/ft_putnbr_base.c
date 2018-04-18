/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 04:02:27 by wawong            #+#    #+#             */
/*   Updated: 2018/03/20 23:04:45 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	do_max(int *nbr, int mod, int *base_num, int *neg);
int		check_valid(char *base);
int		ft_strlen(char *str);
int		change_base(int num, int base_num);
void	ft_putchar(char c);

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_num;
	int mod;
	int neg;

	base_num = ft_strlen(base);
	if (check_valid(base) == 1)
		return ;
	neg = 0;
	mod = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr < -2100000000)
			do_max(&nbr, mod, &base_num, &neg);
		nbr *= -1;
	}
	if (nbr < base_num)
	{
		ft_putchar(base[nbr % base_num]);
		return ;
	}
	ft_putnbr_base(nbr / base_num, base);
	ft_putchar(base[nbr % base_num]);
	(neg == 1) ? (ft_putchar(base[mod])) : 1;
}

void	do_max(int *nbr, int mod, int *base_num, int *neg)
{
	mod = *nbr % *base_num * -1;
	*nbr /= *base_num;
	*neg = 1;
}

int		check_valid(char *base)
{
	int i;
	int j;
	int base_num;

	base_num = ft_strlen(base);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if ((base[i] == base[j]) || base[i] == '-' || base[i] == '+')
				return (1);
			j++;
		}
		i++;
	}
	if (base_num <= 1)
		return (1);
	return (0);
}

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

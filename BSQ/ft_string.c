/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 12:34:28 by wawong            #+#    #+#             */
/*   Updated: 2018/04/04 20:50:48 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	return (i);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void		*error(void)
{
	ft_putstr("map error\n");
	return (NULL);
}

int			ft_atoi_special(char *str)
{
	int sum;
	int sign;

	sign = -1;
	sum = 0;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			sum = (sum * 10) - (*str - '0');
		else
			return (0);
		str++;
	}
	return (sum * sign);
}

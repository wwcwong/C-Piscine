/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 11:14:27 by wawong            #+#    #+#             */
/*   Updated: 2018/03/19 16:22:59 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int num;
	int neg;
	int pos;

	num = 0;
	neg = 0;
	pos = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\r' || *str == '\f' || *str == '\v')
		str++;
	while (*str)
	{
		if ((*str == '-' || *str == '+') && (neg + pos + 1 < 2))
			(*str == '-') ? (neg++) : (pos++);
		else if (*str >= '0' && *str <= '9')
		{
			num = (*str - 48) + num * 10;
		}
		else
			return (num);
		str++;
	}
	(neg == 1) ? (num *= -1) : (num *= 1);
	(neg + pos >= 2) ? (num = 0) : (num *= 1);
	return (num);
}

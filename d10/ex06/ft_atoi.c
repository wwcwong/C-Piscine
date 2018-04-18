/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 16:32:42 by wawong            #+#    #+#             */
/*   Updated: 2018/03/26 19:45:37 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	spc(const char *c, int *count)
{
	while (c[*count] == ' ' || (c[*count] >= 0 && c[*count] <= 32))
	{
		*count = *count + 1;
	}
}

int		ft_atoi(char *str)
{
	int val;
	int c;
	int neg;
	int valid;

	val = 0;
	valid = 0;
	neg = 1;
	c = 0;
	spc(str, &c);
	while (str[c])
	{
		if (str[c] >= 48 && str[c] <= 57)
		{
			valid = 1;
			val *= 10;
			val += str[c] - 48;
		}
		else if ((str[c] == '-' || str[c] == '+') && neg == 1 && valid == 0)
			(str[c] == '-') ? neg = -1 : valid == 1;
		else if (str[c] > 57 || str[c] < 48)
			return (val * neg);
		c++;
	}
	return (val * neg);
}

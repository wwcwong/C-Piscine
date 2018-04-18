/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 15:14:46 by wawong            #+#    #+#             */
/*   Updated: 2018/03/21 15:28:59 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *num;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	num = (int*)malloc(sizeof(*num) * (max - min));
	while (min < max)
	{
		num[i] = min;
		min++;
		i++;
	}
	return (num);
}

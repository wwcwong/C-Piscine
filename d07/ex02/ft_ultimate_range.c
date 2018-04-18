/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 15:35:34 by wawong            #+#    #+#             */
/*   Updated: 2018/03/22 01:20:10 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *num;
	int i;
	int j;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	j = 0;
	num = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
		num[i++] = min++;
	*range = num;
	return (i);
}

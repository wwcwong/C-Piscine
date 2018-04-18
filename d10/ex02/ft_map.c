/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 14:21:49 by wawong            #+#    #+#             */
/*   Updated: 2018/03/26 14:29:07 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *num;
	int i;
	int j;

	i = 0;
	j = 0;
	num = malloc(sizeof(int) * (length + 1));
	while (i < length)
	{
		num[i] = f(tab[i]);
		i++;
	}
	return (num);
}

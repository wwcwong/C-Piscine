/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 00:21:18 by wawong            #+#    #+#             */
/*   Updated: 2018/03/17 18:36:46 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
			break ;
		}
		i++;
	}
	return (0);
}

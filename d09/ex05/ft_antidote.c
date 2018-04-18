/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 22:49:49 by wawong            #+#    #+#             */
/*   Updated: 2018/03/22 23:41:09 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_antidote(int i, int j, int k)
{
	if (i - j > 0 && i - k > 0)
	{
		if (j - k > 0)
			return (j);
		else
			return (k);
	}
	else if (i - j < 0 && i - k < 0)
	{
		if (j - k < 0)
			return (j);
		else
			return (k);
	}
	else
		return (i);
}

int main()
{
	printf("%d",ft_antidote(2,5,1));
	return 0;
}

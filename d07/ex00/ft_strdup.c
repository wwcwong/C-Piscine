/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 11:29:07 by wawong            #+#    #+#             */
/*   Updated: 2018/03/21 15:08:00 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char*)malloc(sizeof(*str) * (j + 1));
	while (src[j])
		j++;
	if (str == 0)
		return (0);
	while (i < j)
	{
		str[i] = src[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}

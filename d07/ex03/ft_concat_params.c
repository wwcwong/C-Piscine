/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 16:18:27 by wawong            #+#    #+#             */
/*   Updated: 2018/03/21 17:11:14 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		cal_size(int argc, char **argv);

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		k;
	int		size;

	i = 1;
	k = 0;
	size = cal_size(argc, argv);
	str = (char*)malloc(sizeof(*str) * (size + 1));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[k++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			str[k++] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}

int		cal_size(int argc, char **argv)
{
	int i;
	int j;
	int size;

	i = 1;
	size = 0;
	if (argc > 2)
		size += argc - 2;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			size++;
			j++;
		}
		i++;
	}
	return (size);
}

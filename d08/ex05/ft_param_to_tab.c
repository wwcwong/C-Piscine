/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 16:17:14 by wawong            #+#    #+#             */
/*   Updated: 2018/03/22 19:48:33 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*arr;
	int				i;
	int				j;

	i = 0;
	arr = malloc(sizeof(*stock) * (ac + 1));
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		arr[i] = malloc(sizeof(t_stock_par));
		arr[i]->size_param = j;
		arr[i]->str = av[i];
		arr[i]->copy = ft_strdup(av[i]);
		arr[i]->tab = ft_split_whitespaces(av[i]);
		i++;
	}
	return (arr);
}

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

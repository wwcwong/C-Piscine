/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 20:08:45 by wawong            #+#    #+#             */
/*   Updated: 2018/03/19 21:38:15 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int start;
	int j;

	i = 0;
	start = 0;
	j = 0;
	while (to_find[j] != '\0')
		j++;
	if (j == 0)
		return ((char *)str);
	while (str[i])
	{
		while (to_find[start] == str[i + start])
		{
			if (start == j - 1)
				return ((char *)str + i);
			start++;
		}
		start = 0;
		i++;
	}
	return (0);
}

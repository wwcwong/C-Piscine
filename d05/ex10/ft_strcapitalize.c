/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 23:53:22 by wawong            #+#    #+#             */
/*   Updated: 2018/03/20 01:16:51 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			('a' <= str[i] && str[i] <= 'z') ? (str[i] = str[i] - 32) : i;
		}
		else if ((0 < str[i] && str[i] < '0') ||
				(str[i] > '9' && str[i] < 'A') ||
				('Z' < str[i] && str[i] < 'a') ||
				('z' < str[i] && str[i] <= 127))
		{
			++i;
			if (str[i] >= 'a' && str[i] <= 'z')
				(str[i] = str[i] - 32);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

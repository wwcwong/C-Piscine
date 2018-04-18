/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 02:47:23 by wawong            #+#    #+#             */
/*   Updated: 2018/03/20 03:54:39 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int j;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	while (size > 1 && *src)
	{
		*dest++ = *src++;
		size--;
	}
	if (size >= 1)
		*dest = '\0';
	return (j);
}

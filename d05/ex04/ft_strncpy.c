/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 17:30:03 by wawong            #+#    #+#             */
/*   Updated: 2018/03/19 18:43:24 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *temp;

	temp = dest;
	while (n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*temp = '\0';
		n--;
	}
	return (dest);
}

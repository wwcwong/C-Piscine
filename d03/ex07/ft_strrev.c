/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 09:55:49 by wawong            #+#    #+#             */
/*   Updated: 2018/03/16 22:37:59 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char *trav;
	char temp;

	trav = str;
	while (*trav != '\0')
	{
		trav++;
	}
	trav--;
	while (str < trav)
	{
		temp = *str;
		*str = *trav;
		*trav = temp;
		str++;
		trav--;
	}
	while (*trav != '\0')
	{
		trav++;
		str--;
	}
	str++;
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrantzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 13:42:38 by afrantzi          #+#    #+#             */
/*   Updated: 2018/04/01 20:55:51 by wawong           ###   ########.fr       */
/*   Updated: 2018/04/01 18:36:27 by brlobo-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	change(char *buf, char *cnr, int d);
void	prush(char *cnr, int *dim);

int	main(void)
{
	char	buf[2];
	int		i;
	char	cnr[5];
	int		d[3];
	int		j;

	i = 1;
	read(0, &buf, 1); //first corner
	cnr[0] = *buf;
	while (read(0, &buf, 1))  // check for width & top right corner
	{
		if (*buf == 'A' || *buf == 'C' || *buf == '\\' || *buf == 'o')
			cnr[1] = *buf;
		else if (*buf == '\n')
		{
			d[0] = i; // width
			break;
		}
		i++;
	}
	change(buf, cnr, d[1]);
	prush(cnr, d);
	return (0);
}

void	change(char *buf, char *cnr, int d)
{
	int i;
	int j;

	j = 0;
	i = 1;
	while (read(0, &buf, 1))
	{
		if (*buf == 'A' || *buf == 'C' || *buf == '\\' || *buf == 'o')
		{
			while (cnr[j]) // check to see if we have a top right corner (i. e. width > 1)
				j++;
			cnr[j] = *buf;
		}
		else if (*buf == '\n') // get length
			i++;
	}
	d = i;
}

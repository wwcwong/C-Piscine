/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 19:13:48 by wawong            #+#    #+#             */
/*   Updated: 2018/03/29 10:46:09 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int			main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	i = 1;
	if (argc == 1 || *argv[1] == '-')
		while ((ret = read(0, buf, sizeof(BUF_SIZE))) != 0)
			write(1, buf, ret);
	else
	{
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd == -1)
				return (errno);
			ret = read(fd, buf, BUF_SIZE);
			buf[ret] = '\0';
			write(1, buf, ret);
			close(fd);
			i++;
		}
	}
	return (0);
}

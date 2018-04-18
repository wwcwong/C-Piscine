/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 16:46:53 by wawong            #+#    #+#             */
/*   Updated: 2018/03/28 21:24:58 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (checkarg(argc) == 1)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "open() error.\n", 14);
		return (1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[BUF_SIZE] = '\0';
		write(1, buf, ret);
	}
	if (close(fd) == -1)
	{
		write(2, "close() error.\n", 15);
		return (0);
	}
	return (0);
}

int		checkarg(int argc)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

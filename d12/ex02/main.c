/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 10:59:01 by wawong            #+#    #+#             */
/*   Updated: 2018/03/29 22:30:38 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int			main(int argc, char **argv)
{
	int		i;
	int		fd;

	i = 1;
	if (argc == 1)
		return (0);
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		ft_tail(fd);
		i++;
	}
	return (0);
}

void		ft_tail(int fd)
{
	int		ret;
	char	buf[11];

	while ((ret = read(fd, buf, 10)))
	{
		buf[ret] = '\0';
		write(1, buf, ret);
		ret = read(fd, buf, fd);
	}
	close(fd);
}

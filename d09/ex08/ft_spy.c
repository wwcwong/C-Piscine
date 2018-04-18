/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 10:15:30 by wawong            #+#    #+#             */
/*   Updated: 2018/03/23 11:08:50 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		check(char *argv)
{
	int i;

	i = 0;
	while (argv[i] == ' ' || argv[i] == '\t')
		i++;
	if (argv[i] == 'k' && argv[i + 1] == 'i' && argv[i + 2] == 'l' &&
				argv[i + 3] == 'l')
		write(1, "Alert!!!\n", 9);
	if (argv[i] == 'd' && argv[i + 1] == 'i' && argv[i + 2] == 'e')
		write(1, "Alert!!!\n", 9);
	if (argv[i] == 'B' && argv[i + 1] == 'a' && argv[i + 2] == 'u' &&
			argv[i + 3] == 'e' && argv[i + 4] == 'r')
		write(1, "Alert!!!\n", 9);
}

void		check2(char *argv)
{
	int i;

	i = 0;
	while (argv[i] == ' ' || argv[i] == '\t')
		i++;
	if (argv[i] == 'p' && argv[i + 1] == 'r' && argv[i + 2] == 'e' &&
			argv[i + 3] == 's' && argv[i + 4] == 'i' && argv[i + 5] == 'd' &&
			argv[i + 6] == 'e' && argv[i + 7] == 'n' && argv[i + 8] == 't')
	{
		write(1, "Alert!!!\n", 9);
	}
}

int			main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc <= 1)
		return (0);
	while (argv[i])
	{
		check(argv[i]);
		check2(argv[i]);
		i++;
	}
	return (0);
}

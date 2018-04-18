/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 14:22:42 by wawong            #+#    #+#             */
/*   Updated: 2018/03/20 14:44:38 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 1;
	k = argc - 1;
	while (argc - 1 > 0)
	{
		while (k > 0)
		{
			while (argv[k][i])
			{
				ft_putchar(argv[k][i]);
				i++;
			}
			ft_putchar('\n');
			k--;
			i = 0;
		}
		argc--;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prush.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlobo-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 16:16:37 by brlobo-a          #+#    #+#             */
/*   Updated: 2018/04/01 19:30:06 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putstr(char *str);
void	putchar(char c);
void	print_dim(int w, int h);

//===== Prints when given > 2 corners =====//
void	print_4(char *cnr, int w, int h)
{
	if (cnr[0] == 'o')
	{
		putstr("[rush-00] ");	
		print_dim(w, h);
	}
	else if (cnr[0] == '/')
	{
		putstr("[rush-01] ");
		print_dim(w, h);
	}
	else if (cnr[0] == 'A' && cnr[1] == 'A')
	{
		putstr("[rush-02] ");
		print_dim(w, h);
	}
	else if (cnr[0] == 'A' && cnr[1] == 'C' && cnr[2] == 'A')
	{
		putstr("[rush-03] ");
		print_dim(w, h);
	}
	else if (cnr[0] == 'A' && cnr[1] == 'C' && cnr[2] == 'C')
	{
		putstr("[rush-04] ");
		print_dim(w, h);
	}
}

//===== Prints when given 2 corners and height is 1 =====//
void	print_h1(char *cnr, int w, int h)
{
	if (cnr[0] == 'A' && cnr[1] == 'A')
	{
		putstr("[rush-02] ");
		print_dim(w, h);
	}
	else if (cnr[0] == 'A' && cnr[1] == 'C')
	{
		putstr("[rush-03] ");
		print_dim(w, h);
		putstr(" || [rush-04] ");
		print_dim(w, h);
	}
}

//===== Prints when given 2 corners and width is 1 =====//
void	print_2(char *cnr, int w, int h)
{
	if (cnr[0] == 'o' || cnr[0] == '/')
		print_4(cnr, w, h);
	else if (w == 1 && h > 1)
	{
		if (cnr[0] == 'A' && cnr[1] == 'C')
		{
			putstr("[rush-02] ");
			print_dim(w, h);
			putstr(" || [rush-04] ");
			print_dim(w, h);
		}
		else if (cnr[0] == 'A' && cnr[1] == 'A')
		{
			putstr("[rush-03] ");
			print_dim(w, h);
		}
	}
	else if (h == 1 && w > 1)
		print_h1(cnr, w, h);
}

//===== Prints when given one corner =====//
void	print_1(char *cnr, int w, int h)
{
	if (cnr[0] == 'o' || cnr[0] == '/')
		print_4(cnr, w, h);
	else if (cnr[0] == 'A')
	{
		putstr("[rush-02] ");
		print_dim(w, h);
		putstr(" || [rush-03] ");
		print_dim(w, h);
		putstr(" || [rush-03] ");
		print_dim(w, h);
	}
}

void	prush(char *cnr, int *dim)
{
	int x;
	int w;
	int h;
		
	x = 0;
	if (!cnr)
	{
		putstr("error mf\n");
		return ;
	}
	w = dim[0];
	h = dim[1];
	while (cnr[x])
		x++;
	if (x > 2)
		print_4(cnr, w, h);
	else if (x == 2)
		print_2(cnr, w, h);
	else if (x == 1)
		print_1(cnr, w, h);
	putchar('\n');
	return ;	
}

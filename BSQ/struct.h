/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acakste <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 08:41:37 by acakste           #+#    #+#             */
/*   Updated: 2018/04/04 23:21:13 by acakste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>

typedef	struct		s_list
{
	short			x[10];
	struct s_list	*next;
}					t_list;

typedef	struct		s_info
{
	int				height;
	int				width;
	char			open;
	char			obs;
	char			box;
	int				switched;
}					t_info;

typedef struct		s_placement
{
	int				x;
	int				y;
	int				size;
}					t_placement;

void				switch_chars(t_info *map);
t_list				*ft_create_list_elem(int x);
void				ft_list_push_back(t_list **begin_list, int x);
t_list				**ft_array_index(int size);
int					check_placement(t_placement try,
	t_list **array, int switched);
int					check_row(t_list *array, int x, int x2);
t_placement			solve(t_info *map, t_list **array);
void				print(t_list **array, t_placement box, t_info *map);
void				print_row(t_list *array, t_placement box,
	t_info map, int special);
void				free_mem(t_list **array, t_info *map);
t_info				*load_struct(int fp, t_info *map, t_list **array);
t_info				*get_info(int fp);
void				switch_chars(t_info *map);
int					for_read(t_info *map, t_list **array, char c);
int					ft_strlen(char *str);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				*error(void);
int					ft_atoi_special(char *str);
t_info				*load_struct(int fp, t_info *map, t_list **array);

#endif

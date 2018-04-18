/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 06:21:55 by wawong            #+#    #+#             */
/*   Updated: 2018/04/01 16:02:51 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_H
# define EVAL_H

enum						e_level{lv1, lv2, lv3, lv4};
typedef int					t_type;

typedef struct s_stack		*t_stack;
struct						s_stack
{
	long					num;
	enum e_level			level;
	t_type					type;
	struct s_stack			*next;
};
typedef struct s_formula	*t_formula;
struct						s_formula
{
	t_stack					form;
	t_stack					last;
};

t_stack						create(int num, t_type type);
t_formula					to_postfix(char *form);

#endif

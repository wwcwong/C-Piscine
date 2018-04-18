/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 06:21:32 by wawong            #+#    #+#             */
/*   Updated: 2018/04/01 16:48:42 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "eval.h"
#include "math.h"
#include "struct.h"

void			set_level(t_stack node)
{
	char c;

	c = node->num;
	if (c == '(' || c == ')')
		node->level = lv4;
	else if (c == '*' || c == '/' || c == '%')
		node->level = lv3;
	else if (c == '+' || c == '-')
		node->level = lv2;
	else
		return ;
}

t_stack			create(int num, t_type type)
{
	t_stack node;

	node = (t_stack)malloc(sizeof(struct s_stack));
	if (node)
	{
		node->num = num;
		node->level = lv1;
		if (type == 1)
			set_level(node);
		node->next = NULL;
		node->type = type;
		return (node);
	}
	return (0);
}

void			not_num(t_formula list, t_formula stack, char *form)
{
	t_stack local;

	if (*form == ')')
		while ((char)(local = pop(stack))->num != '(')
			insert_num(list, local);
	else
	{
		if ((!(stack->form)) || ((stack->form)->level
					< create(*form, 1)->level))
			push(stack, create(*form, 1));
		else
		{
			while ((stack->form) && (stack->form)->level != lv4
					&& (stack->form)->level >= create(*form, 1)->level)
				insert_num(list, pop(stack));
			push(stack, create(*form, 1));
		}
	}
}

t_formula		to_postfix(char *form)
{
	t_formula	list;
	t_formula	stack;
	long		num;

	build(&list);
	build(&stack);
	num = 0;
	while (*form && (*form) != '\n')
	{
		if ('0' <= *form && *form <= '9')
		{
			while ('0' <= *(form + 1) && *(form + 1) <= '9')
				num = num * 10 + (*(form++) - '0');
			num = num * 10 + (*form - '0');
			insert_num(list, create(num, 0));
			num = 0;
		}
		else
			not_num(list, stack, form);
		form++;
	}
	while (stack->form)
		insert_num(list, pop(stack));
	free(stack);
	return (list);
}

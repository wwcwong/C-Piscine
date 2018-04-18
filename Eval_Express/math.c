/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 06:21:32 by wawong            #+#    #+#             */
/*   Updated: 2018/04/01 16:48:51 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"
#include "struct.h"

int		calculate(int a, int b, int op)
{
	char c;

	c = (char)op;
	if (op == '+')
		return (a + b);
	else if (op == '-')
		return (b - a);
	else if (op == '*')
		return (a * b);
	else if (op == '/')
		return (b / a);
	else if (op == '%')
		return (b % a);
	return (1);
}

int		result(t_formula postfix)
{
	int			result;
	t_formula	stack;
	t_stack		temp;
	t_stack		a;
	t_stack		b;

	temp = postfix->form;
	result = 0;
	build(&stack);
	while (temp)
	{
		if (temp->type == 0)
			push(stack, create(temp->num, temp->type));
		else
		{
			a = pop(stack);
			b = pop(stack);
			result = calculate(a->num, b->num, temp->num);
			push(stack, create(result, 0));
		}
		temp = temp->next;
	}
	return (pop(stack)->num);
}

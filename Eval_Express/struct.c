/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 16:19:14 by wawong            #+#    #+#             */
/*   Updated: 2018/04/01 16:19:19 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "eval.h"
#include <stdlib.h>

int		is_empty(t_formula formula)
{
	return (formula->form == NULL);
}

void	build(t_formula *formula)
{
	*formula = (t_formula)malloc(sizeof(struct s_formula));
	(*formula)->form = NULL;
	(*formula)->last = NULL;
}

void	insert_num(t_formula formula, t_stack new)
{
	if (!is_empty(formula))
	{
		formula->last->next = new;
		formula->last = new;
	}
	else
	{
		formula->form = new;
		formula->last = new;
	}
}

void	push(t_formula formula, t_stack new)
{
	new->next = formula->form;
	formula->form = new;
}

t_stack	pop(t_formula formula)
{
	t_stack temp;

	if (!is_empty(formula))
	{
		temp = formula->form;
		formula->form = temp->next;
	}
	else
		return (NULL);
	return (temp);
}

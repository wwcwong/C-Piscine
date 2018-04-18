/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 16:18:02 by wawong            #+#    #+#             */
/*   Updated: 2018/04/01 16:19:43 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# include "eval.h"

int				is_empty(t_formula formula);
void			build(t_formula *formula);
void			insert_num(t_formula formula, t_stack new);
void			push(t_formula formula, t_stack new);
t_stack			pop(t_formula formula);

#endif

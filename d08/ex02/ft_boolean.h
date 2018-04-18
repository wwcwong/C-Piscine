/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 11:47:17 by wawong            #+#    #+#             */
/*   Updated: 2018/03/22 12:23:34 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE		1
# define FALSE		0
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG		"I have an odd number of arguments.\n"
# define EVEN(x)		(x % 2 == 0 )
# define SUCCESS	0

typedef int		t_bool;
#endif

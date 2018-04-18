/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 22:57:22 by wawong            #+#    #+#             */
/*   Updated: 2018/03/30 23:21:22 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void		*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (!(root))
		return (0);
	btree_search_item((root->left), data_ref, cmpf);
	if (cmpf(item, (root)->item) == 0)
		return (root);
	btree_search_item((root->right), data_ref, cmpf);
	return (0);
}

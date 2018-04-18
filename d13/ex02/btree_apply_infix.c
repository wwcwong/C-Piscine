/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wawong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 12:34:08 by wawong            #+#    #+#             */
/*   Updated: 2018/03/30 12:36:15 by wawong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
	{
		if (root->left)
			btree_apply_infix(root->left, applyf);
		(*applyf)(root->item);
		if (root->right)
			btree_apply_infix(root->right, applyf);
	}
}

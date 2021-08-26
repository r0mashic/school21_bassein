/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:31:48 by balysane          #+#    #+#             */
/*   Updated: 2021/08/20 22:34:36 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_btree.h"
void	btree_apply_infix(t_btree *root, void	(*applyf)(void *))
{
	if (!root)
		return ;
	else if (root)
	{
		btree_apply_infix(root->left, applyf);
		(*applyf)(root->item);
		btree_apply_infix(root->right, applyf);
	}
}

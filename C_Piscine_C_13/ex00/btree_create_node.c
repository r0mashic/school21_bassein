/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:31:48 by balysane          #+#    #+#             */
/*   Updated: 2021/08/20 22:27:36 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_btree.h"
t_btree	*btree_create_node(void *item)
{
	t_btree	*btree;

	btree = 0;
	btree = malloc(sizeof(t_btree));
	if (btree == 0)
		return (0);
	btree->left = 0;
	btree->right = 0;
	btree->item = item;
	return (btree);
}

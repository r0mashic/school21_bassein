/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:31:48 by balysane          #+#    #+#             */
/*   Updated: 2021/08/20 22:35:59 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BTREE_H
# define FT_BTREE_H
typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}	t_btree;
#endif

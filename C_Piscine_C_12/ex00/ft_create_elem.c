/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:27:13 by balysane          #+#    #+#             */
/*   Updated: 2021/08/19 19:44:57 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	list = 0;
	list = malloc(sizeof(t_list));
	if (list == 0)
		return (0);
	list->data = data;
	list->next = NULL;
	return (list);
}

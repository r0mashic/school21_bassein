/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 20:27:01 by balysane          #+#    #+#             */
/*   Updated: 2021/08/06 20:31:13 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)

{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (0);
}
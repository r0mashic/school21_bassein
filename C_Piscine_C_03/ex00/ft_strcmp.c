/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:52:05 by balysane          #+#    #+#             */
/*   Updated: 2021/08/08 20:23:19 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if ((s1[i] - s2[i]) != 0)
			return (s1[i] - s2[i]);
		i ++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char s1[] = "a34A2SASD23423ASD";
	char s2[] = "aSASDASD";
	printf("%d\n", ft_strcmp(s1,s2));
	printf("%d", strcmp(s1,s2));
}

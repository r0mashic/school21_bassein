/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:31:48 by balysane          #+#    #+#             */
/*   Updated: 2021/08/10 14:53:49 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	while ((i * i != nb && i != nb) && i < 46340)
		i++;
	if (i == nb)
		return (0);
	
	return (i);
}

int	main(void)
{
	printf("%f\n", sqrt(2147483641));
	//printf("%d", ft_sqrt(-25));
	printf("%d\n", ft_sqrt(2147483641));	//0
	printf("%d\n", ft_sqrt(25));	//5
	printf("%d\n", ft_sqrt(169));	//13
	printf("%d\n", ft_sqrt(1));		//1
	printf("%d\n", ft_sqrt(0));		//0
	printf("%d\n", ft_sqrt(3));		//0
	printf("%d\n\n", ft_sqrt(2147483647));	//0

}

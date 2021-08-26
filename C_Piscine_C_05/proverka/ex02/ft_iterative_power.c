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

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	znachenie;

	i = -1;
	znachenie = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (++i < power)
		znachenie *= nb;
	return (znachenie);
}

int	main()
{
	int	nb00, nb01;
    nb00 = 2147483647;
	nb01 = -2147483648;
	printf("%d\n", ft_iterative_power(3, 5));		//243
	printf("%d\n", ft_iterative_power(1, 0));		//1
	printf("%d\n", ft_iterative_power(0, 0));		//1
	printf("%d\n", ft_iterative_power(1, 1));		//1
	printf("%d\n", ft_iterative_power(0, 1));		//0
	printf("%d\n", ft_iterative_power(5, -2));		//0
	printf("%d\n", ft_iterative_power(-2, 5));		//-32
	printf("%d\n", ft_iterative_power(10, 9));		//1000000000
	//owerflow:
	printf("%d\n", ft_iterative_power(10, 10));		//1410065408	
	printf("%d\n", ft_iterative_power(nb00, 2));	//1
	printf("%d\n\n", ft_iterative_power(nb01, 2));	//0
}
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

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (nb);
}

int	main(void)
{
	int	nb00, nb01, nb02, nb03, nb04, nb05;

    nb00 = 2147483647;
	nb01 = -2147483648;
	nb02 = 0;
	nb03 = -2;
	nb04 = 3;
	nb05 = 15;
	//printf("%d\n", ft_recursive_factorial(nb00));	//segmentation fault
	printf("%d\n", ft_recursive_factorial(nb01));	//0
	printf("%d\n", ft_recursive_factorial(nb02));	//1
	printf("%d\n", ft_recursive_factorial(nb03));	//0
	printf("%d\n", ft_recursive_factorial(nb04));	//6
	printf("%d\n\n", ft_recursive_factorial(nb05));	//2004310016
}
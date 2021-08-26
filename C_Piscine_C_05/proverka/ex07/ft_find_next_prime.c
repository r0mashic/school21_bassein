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

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <=1)
		return (0);
	while (i != nb)
	{	
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (nb++)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
	}
	return (0);
}



int	main(void)
{
	printf("%d\n", ft_find_next_prime(-1));				//2
	printf("%d\n", ft_find_next_prime(0));				//2
	printf("%d\n", ft_find_next_prime(1));				//2
	printf("%d\n", ft_find_next_prime(2));				//2
	printf("%d\n", ft_find_next_prime(3));				//3
	printf("%d\n", ft_find_next_prime(18));				//23
	printf("%d\n", ft_find_next_prime(24));				//29
	printf("%d\n", ft_find_next_prime(885));			//887
	printf("%d\n", ft_find_next_prime(3389));			//3389
	printf("%d\n", ft_find_next_prime(3253));			//3253
	printf("%d\n", ft_find_next_prime(3390));			//3391
	printf("%d\n", ft_find_next_prime(3570));			//3571
	printf("%d\n", ft_find_next_prime(4894));			//4903
	printf("%d\n\n", ft_find_next_prime(2147483648));	//1

}

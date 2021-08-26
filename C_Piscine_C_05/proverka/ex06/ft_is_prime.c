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

int	main(void)
{
	printf("%d\n", ft_is_prime(-1));			//0
	printf("%d\n", ft_is_prime(0));				//0
	printf("%d\n", ft_is_prime(1));				//0
	printf("%d\n", ft_is_prime(2));				//1
	printf("%d\n", ft_is_prime(3));				//1
	printf("%d\n", ft_is_prime(17));			//1
	printf("%d\n", ft_is_prime(29));			//1
	printf("%d\n", ft_is_prime(883));			//1
	printf("%d\n", ft_is_prime(3389));			//1
	printf("%d\n", ft_is_prime(3390));			//0
	printf("%d\n", ft_is_prime(3570));			//0
	printf("%d\n", ft_is_prime(4894));			//0
	printf("%d\n\n", ft_is_prime(2147483647));	//1

}

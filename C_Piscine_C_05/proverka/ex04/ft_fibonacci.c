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

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1 )
		return (1);
	if (index != 0)
		return (ft_fibonacci(index-1) + ft_fibonacci(index - 2));
	return (index);
}

int	main(void)
{

	printf("%d\n", ft_fibonacci(0));				//0
	printf("%d\n", ft_fibonacci(2));				//1
	printf("%d\n", ft_fibonacci(3));				//2
	printf("%d\n", ft_fibonacci(5));				//5
	printf("%d\n", ft_fibonacci(-228));				//-1
	printf("%d\n", ft_fibonacci(46));				//1836311903
	printf("%d\n", ft_fibonacci(-40));				//-1
	printf("%d\n", ft_fibonacci(10));				//55
	printf("%d\n\n", ft_fibonacci(-2147483648));	//-1
	//owerflow:
	printf("%d\n", ft_fibonacci(2147483647));		//segmentation fault
	
}
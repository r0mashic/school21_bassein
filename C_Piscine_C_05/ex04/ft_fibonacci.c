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
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1 )
		return (1);
	if (index != 0)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (index);
}

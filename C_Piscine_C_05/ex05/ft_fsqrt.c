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
int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	while (i * i != nb && i != nb)
		i++;
	if (i == nb)
		return (0);
	return (i);
}

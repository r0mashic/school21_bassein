/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:27:13 by balysane          #+#    #+#             */
/*   Updated: 2021/08/18 19:49:19 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*lol;

	lol = (int *)malloc(sizeof(int) * length);
	if (lol == 0)
		return (0);
	i = -1;
	while (++i < length)
		lol[i] = f(tab[i]);
	return (lol);
}

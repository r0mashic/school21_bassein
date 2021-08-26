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
int	ft_atoi(char *str)
{
	int	i;
	int	vivod;
	int	kol_vo_minusov;

	kol_vo_minusov = 0;
	i = 0;
	vivod = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{			
		while (str[i] == '-')
			kol_vo_minusov = ++i;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		vivod *= 10;
		vivod += ((int)str[i] - '0');
		i++;
	}
	if (kol_vo_minusov % 2 == 1)
		return (-vivod);
	return (vivod);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:31:48 by balysane          #+#    #+#             */
/*   Updated: 2021/08/15 20:54:29 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}
}

int	is_input_right(char *av)
{
	int	av_index;
	int	count;

	av_index = 0;
	count = 0;
	while (av[av_index] != '\0')
	{
		if (av[av_index] >= '1' && av[av_index] <= '4')
		{
			av_index++;
			count++;
		}
		else
			return (0);
		if (av[av_index] == '\0')
			break ;
		if (av[av_index] == ' ')
			av_index++;
		else
			return (0);
	}
	if (count != 16)
		return (0);
	return (1);
}

void	visible_if(t_v *field, char *av, int *i, int f_s)
{
	int	count;

	count = 0;
	while (count < 4)
	{
		if (av[*i] == ' ')
			(*i)++;
		if (f_s % 4 == 0)
			field->top[count] = av[*i] - '0';
		else if (f_s % 4 == 1)
			field->bottom[count] = av[*i] - '0';
		else if (f_s % 4 == 2)
			field->left[count] = av[*i] - '0';
		else if (f_s % 4 == 3)
			field->right[count] = av[*i] - '0';
		count++;
		(*i)++;
	}
}

void	set_count_of_visible(t_v *field, char *av)
{
	int	field_side;
	int	av_index;

	field_side = 0;
	av_index = 0;
	while (field_side < 4)
	{
		visible_if(field, av, &av_index, field_side);
		field_side++;
	}
}

int	is_boxes_repit(int boxes[4][4], int n, int height)
{
	int	col_index;
	int	row_index;

	col_index = 0;
	while (col_index < n % 4)
	{
		if (height == boxes[n / 4][col_index])
			return (1);
		col_index++;
	}
	row_index = 0;
	while (row_index < n / 4)
	{
		if (height == boxes[row_index][n % 4])
			return (1);
		row_index++;
	}
	return (0);
}

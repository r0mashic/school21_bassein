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

void	exit_ruls(int boxes[4][4], int n, int *flag)
{
	int	value;
	int	i;
	int	j;

	i = 0;
	if (n >= 16)
	{
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				value = boxes[i][j] + '0';
				write(1, &value, 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
		*flag = 1;
		return ;
	}
}

int	rec_if(t_v field, int boxes[4][4], int n, int height)
{
	if (is_boxes_repit(boxes, n, height))
		return (0);
	if (!is_row_correct(field, boxes, n, height))
		return (0);
	if (!is_col_correct(field, boxes, n, height))
		return (0);
	return (1);
}

void	set_boxes(t_v field, int boxes[4][4], int n, int *flag)
{
	int	height;
	int	previous_boxes;

	exit_ruls(boxes, n, flag);
	height = 1;
	while (height <= 4)
	{
		previous_boxes = 0;
		while (previous_boxes < n)
		{
			if (!rec_if(field, boxes, n, height))
				break ;
			previous_boxes++;
		}
		if (previous_boxes == n)
		{
			boxes[n / 4][n % 4] = height;
			set_boxes(field, boxes, n + 1, flag);
			if (*flag)
				return ;
		}
		height++;
	}
}

void	set_val_boxes(int boxes[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			boxes[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	riddle_boxes(char *av)
{
	t_v	field;
	int	boxes[4][4];
	int	flag;

	flag = 0;
	if (is_input_right(av))
	{
		set_count_of_visible(&field, av);
		set_val_boxes(boxes);
		set_boxes(field, boxes, 0, &flag);
	}
	else
	{
		ft_putstr("Error");
		return ;
	}
}

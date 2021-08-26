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

void	isr_checkl(int boxes[4][4], int n, int *max, int *v_c)
{
	int	col_index;

	col_index = 0;
	while (col_index < n % 4)
	{
		if (boxes[n / 4][col_index] > *max)
		{
			*max = boxes[n / 4][col_index];
			(*v_c)++;
		}
		col_index++;
	}
}

void	isr_checkr(int boxes[4][4], int n, int *max, int *v_c)
{
	int	col_index;

	col_index = (n % 4) - 1;
	while (col_index >= 0)
	{
		if (boxes[n / 4][col_index] > *max)
		{
			*max = boxes[n / 4][col_index];
			(*v_c)++;
		}
		col_index--;
	}
}

int	is_row_correct(t_v field, int boxes[4][4], int n, int height)
{
	int	v_c_l;
	int	v_c_r;
	int	c_edge;
	int	maxl;
	int	maxr;

	maxl = 0;
	maxr = 0;
	c_edge = n % 4;
	v_c_l = 0;
	v_c_r = 0;
	isr_checkl(boxes, n, &maxl, &v_c_l);
	if (height > maxl)
		v_c_l++;
	if (height > maxr)
	{
		maxr = height;
		v_c_r++;
	}
	isr_checkr(boxes, n, &maxr, &v_c_r);
	if (v_c_l > field.left[n / 4] || v_c_r > field.right[n / 4])
		return (0);
	return (1);
}

void	isc_checkt(int boxes[4][4], int n, int *max, int *v_c)
{
	int	row_index;

	row_index = 0;
	while (row_index < n / 4)
	{
		if (boxes[row_index][n % 4] > *max)
		{
			*max = boxes[row_index][n % 4];
			(*v_c)++;
		}
		row_index++;
	}
}

void	isc_checkb(int boxes[4][4], int n, int *max, int *v_c)
{
	int	row_index;

	row_index = (n / 4) - 1;
	while (row_index >= 0)
	{
		if (boxes[row_index][n % 4] > *max)
		{
			*max = boxes[row_index][n % 4];
			(*v_c)++;
		}
		row_index--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaharat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:57:02 by tbaharat          #+#    #+#             */
/*   Updated: 2021/08/14 17:57:06 by tbaharat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	is_col_correct(t_v field, int boxes[4][4], int n, int height)
{
	int	v_c_t;
	int	v_c_b;
	int	r_edge;
	int	maxt;
	int	maxb;

	maxt = 0;
	maxb = 0;
	r_edge = n / 4;
	v_c_t = 0;
	v_c_b = 0;
	isc_checkt(boxes, n, &maxt, &v_c_t);
	if (height > maxt)
		v_c_t++;
	if (height > maxb)
	{
		maxb = height;
		v_c_b++;
	}
	isc_checkb(boxes, n, &maxb, &v_c_b);
	if (v_c_t > field.top[n % 4] || v_c_b > field.bottom[n % 4])
		return (0);
	return (1);
}

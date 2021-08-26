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
#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>
typedef struct s_count_of_visible
{
	int	top[4];
	int	bottom[4];
	int	left[4];
	int	right[4];
}	t_v;
void	ft_putstr(char *str);
int		is_input_right(char *av);
void	visible_if(t_v *field, char *av, int *i, int f_s);
void	set_count_of_visible(t_v *field, char *av);
int		is_boxes_repit(int boxes[4][4], int n, int height);
void	isr_checkl(int boxes[4][4], int n, int *max, int *v_c);
void	isr_checkr(int boxes[4][4], int n, int *max, int *v_c);
int		is_row_correct(t_v field, int boxes[4][4], int n, int height);
void	isc_checkt(int boxes[4][4], int n, int *max, int *v_c);
void	isc_checkb(int boxes[4][4], int n, int *max, int *v_c);
int		is_col_correct(t_v field, int boxes[4][4], int n, int height);
void	exit_ruls(int boxes[4][4], int n, int *flag);
int		rec_if(t_v field, int boxes[4][4], int n, int height);
void	set_boxes(t_v field, int boxes[4][4], int n, int *flag);
void	set_val_boxes(int boxes[4][4]);
void	riddle_boxes(char *av);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaharat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:57:02 by tbaharat          #+#    #+#             */
/*   Updated: 2021/08/14 17:57:06 by tbaharat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#define BYTECOUNT 255

void	open_library(char *library)
{
	int		stroki;

	int		kol_vo_strok = 0, dl_stroki = 0;
	int		file;
	char	text;
	char	**arr;
    int symbol = 0;
    int stroka = 0, stolbec = 0;
    stroki = 0;
    char *str;
    int i;
    int *vsyo;
	char k;
    file = open(library, O_RDONLY);
	if (file < 0)
		return ;
	while (read(file, &text, 1))
        {

        if (*&text > '0' && *&text < '9')
         k = *&text;
        printf("%c", k);
            // write(1, &text, 1);
		if (*&text == '\n')
            kol_vo_strok++;
        else
            dl_stroki++;
        }
    printf("\ndl_stroki:    %d", dl_stroki);
    printf("\nkol_vo_strok: %d", kol_vo_strok);
	close(file);
}


void write_library(char *new_library, char *znachenie)
{
    char i;

    i = 0;
    i = *new_library + *znachenie;
    printf("%c", i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(int argc, char **argv)
{
    if (argc > 3 || argc < 2)
        return (0);
    else if (argc == 2)
		open_library(argv[1]);
    else if (argc == 3)
        write_library(argv[1], argv[2]);
}

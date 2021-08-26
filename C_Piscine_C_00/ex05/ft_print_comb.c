#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_vivod(char i, char k, char j)
{
	ft_putchar(i);
	ft_putchar(k);
	ft_putchar(j);
}

void	ft_znaki(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char	i;
	char	k;
	char	j;

	i = '0';
	while (i <= '7')
	{	
		k = i + 1;
		while (k <= '8')
		{
			j = k + 1;
			while (j <= '9')
			{
				ft_vivod(i, k, j);
				if (!(i == '7' && k == '8' && j == '9'))
					ft_znaki();
				j++;
			}
			k++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
}

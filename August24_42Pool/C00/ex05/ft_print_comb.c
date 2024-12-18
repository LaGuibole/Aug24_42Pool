#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_all()
{
	
}
void ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 7)
	{
		ft_putchar(i);
		while (j <= 8)
		{
			j = i + 1;
			ft_putchar(j);
			while (k <= 9)
			{
				ft_putchar(k);
				k = j + 1;
				k++;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb();
	return 0;
}

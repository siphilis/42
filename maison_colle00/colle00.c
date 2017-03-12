#define	CORNER_L 'o'
#define	CORNER_R 'o'
#define T_EDGE '-'
#define S_EDGE '|'

void	ft_putchar(char c);

void	colle(int x, int y)
{
	while (x > 0 && y > 0)
	{
		ft_putchar(CORNER_L);
		if (x > 2)
		{
			int i;

			i = 0;
			while (i < x - 2)
			{
				ft_putchar(T_EDGE);
				i++;
			}
			ft_putchar(CORNER_R);
		}
		ft_putchar('\n');
		if (y > 1)
		{
			int j;

			j = 0;
			while (j < y - 1)
			{
				ft_putchar(S_EDGE);
				int k;

				k = 0;
				while (k < x - 2)
				{
					ft_putchar(' ');
					k++;
				}
				ft_putchar(S_EDGE);
				ft_putchar('\n');
				j++;
			}
			ft_putchar(CORNER_L);
			if (x > 2)
			{
				int i;

				i = 0;
				while (i < x - 2)
				{
					ft_putchar(T_EDGE);
					i++;
				}
				ft_putchar(CORNER_L);
			}
		}
		return ;
	}
}

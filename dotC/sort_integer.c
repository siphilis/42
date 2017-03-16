void		ft_putchar(char c);
void		ft_putnbr(int nb);
void		ft_sort_integer_table(int *tab, int size);

int			main(void)
{
	int tableau[] = {9,8,7,6,5,4,3,2,1};
	int	size;
	int	c;

	size = 9;
	c = 0;
	while (c < size)
	{
		ft_putnbr(tableau[c]);
		c++;
	}
	ft_sort_integer_table(tableau, size);
	ft_putchar('\n');
	c = 0;
	while (c < size)
	{
		ft_putnbr(tableau[c]);
		c++;
	}
}

void		ft_sort_integer_table(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
	i++;
	}
}

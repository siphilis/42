int			ft_iterative_factorial(int nb);
void		ft_putnbr(int nb);
void		ft_putchar(char c);

int			main(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (num1 != 14)
	{
		ft_putnbr(num1);
		ft_putchar('\n');
		num2 = ft_iterative_factorial(num1);
		ft_putnbr(num2);
		num1++;
	}
}

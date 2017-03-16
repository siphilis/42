#include <stdlib.h>

int			ft_atoi(char *str);
void		ft_putchar(char c);
void		ft_putnbr(int nb);
void		ft_putstr(char *str);

int			main(void)
{
	int		resultat;
	char	*problem;

	problem = "-2127483648";
	resultat = 0;
	ft_putstr(problem);
	ft_putchar('\n');
	resultat = ft_atoi(problem);
	ft_putnbr(resultat);
}

// int			ft_atoi(char *str)
// {
// 	int	negative;
// 	int	result;
// 
// 	result = 0;
// 	negative = 0;
// 	while (*str == ' ' || *str == '\t' || *str == '\n')
// 		str++;
// 	if (*str 
// 	while (str
// 	if (str[0] == '-')
// 	{
// 	}
// }
// 

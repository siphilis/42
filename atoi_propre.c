#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int	i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i])
	{
		while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
			i++;
		sign = (str[i] == '-') ? -1: 1;
		if (str[i] == '-' || str[i] == '+')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = ((result * 10) + (str[i] - '0'));
			i++;
		}
	}
	return (result * sign);
}

int		main(int argc, char **argv)
{
	printf("ton atoi : %d\n", ft_atoi(argv[1]));
	printf("vrai atoi : %d", atoi(argv[1]));
}

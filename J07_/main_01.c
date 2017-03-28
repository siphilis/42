#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		*ft_range(int min, int max);

int		main(int argc, char **argv)
{
	(void)argc;
	int a;
	int b;
	int i;
	int *ptr;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	i = 0;
	ptr = ft_range(a, b);
	while (i < (b - a))
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	return (0);
}

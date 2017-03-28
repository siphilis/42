#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main(int argc, char **argv)
{
	(void)argc;
	printf("ton truc : %s\n", ft_strdup(argv[1]));
	printf("vrai truc : %s", strdup(argv[1]));
}

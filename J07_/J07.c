/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KompilaThorJ05.compile                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wescande <wescande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 12:10:30 by wescande          #+#    #+#             */
/*   Updated: 2016/08/08 12:10:32 by wescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define color(p) printf("[%dm", p)
#define RED 31
#define GRE 32
#define BLU 36
#define WHI 37

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		ft_atoi(char *str);



char *ft_strdup(char *src);

int *ft_range(int min, int max);



















int		main(void)
{
	
	printf("<=================================================>\n");
	char *nom = "ft_range";
	int correct = 0;
	printf("Ex 01 : %s\n", nom);
	if (!strcmp("ft_range.c","ft_range.c"))
	{
		color(32);
		printf("Nom = OK");
	}
	else
	{
		color(31);
		correct++;
		printf("Nom = ERREUR ! ! ! !");
	}
	color(0);
	printf("\n");
	int val_send[45] = {-20,0,33,399,-6};
	int val_send1[45] = {60,34,34,423,10};
	int *ret;
	int i = 0;
	while (i < 5)
	{
		printf("Test #%d avec ", i);
		color(34);
		printf("%i et %i\n" , val_send[i], val_send1[i]);
		color(0);
		ret = ft_range(val_send[i], val_send1[i]);
		int j = 0;
		int fin = val_send[i] - val_send1[i];
		if (fin < 0)
			fin *= 1;
		while (ret[j] < fin)
			{
				printf("%i ",ret[j]);
				++j;
			}
		printf("= RESULT"); 
		color(0);
		printf("\n");
		i++;
	}
	if (correct == 0)
	{
		color(BLU);
		printf("\n<====================CHECK IT YOURSELF !======================>\n");
	}
	color(0);
	printf("\n");


	return (0);
}

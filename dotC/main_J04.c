/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susitkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 12:21:24 by susitkov          #+#    #+#             */
/*   Updated: 2017/03/11 11:08:23 by susitkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb);
int	ft_recursive_factorial(int nb);
int	ft_iterative_power(int nb, int power);
int	ft_recursive_power(int nb, int power);
int	ft_fibonacci(int index);
int	ft_sqrt(int nb);
int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);
int ft_eight_queens_puzzle(void);
void ft_eight_queens_puzzle_2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argv[1][0] == '0')
		printf("\nex00:\t%d\n\n", ft_iterative_factorial(atoi(argv[2])));
	if (argv[1][0] == '1')
		printf("\nex01:\t%d\n\n", ft_recursive_factorial(atoi(argv[2])));
	if (argv[1][0] == '2')
		printf("\nex02:\t%d\n\n", ft_iterative_power(atoi(argv[2]), atoi(argv[3])));
	if (argv[1][0] == '3')
		printf("\nex03:\t%d\n\n", ft_recursive_power(atoi(argv[2]), atoi(argv[3])));
	if (argv[1][0] == '4')
		printf("\nex04:\t%d\n\n", ft_fibonacci(atoi(argv[2])));
	if (argv[1][0] == '5')
		printf("\nex05:\t%d\n\n", ft_sqrt(atoi(argv[2])));
	if (argv[1][0] == '6')
		printf("\nex06:\t%d\n\n", ft_is_prime(atoi(argv[2])));
	if (argv[1][0] == '7')
		printf("\nex07:\t%d\n\n", ft_find_next_prime(atoi(argv[2])));
	if (argv[1][0] == '8')
		printf("\nex08:\t%d\n\n", ft_eight_queens_puzzle());
	if (argv[1][0] == '9')
		ft_eight_queens_puzzle_2();
	return (0);
}

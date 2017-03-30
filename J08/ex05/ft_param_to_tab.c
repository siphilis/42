/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 19:45:18 by qdurot            #+#    #+#             */
/*   Updated: 2017/03/30 17:02:33 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*copy;

	i = 0;
	len = 0;
	if (!(src))
		return (0);
	while (src[len])
		len++;
	if (!(copy = (char*)malloc(sizeof(*src) * (len + 1))))
		return (0);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = src[i];
	return (copy);
}

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		while (tab[i][j])
			ft_putchar(tab[i][j++]);
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*structure;

	i = 0;
	if (!(structure = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		structure[i].size_param = ft_strlen(av[i]);
		structure[i].str = av[i];
		structure[i].copy = ft_strdup(av[i]);
		structure[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	structure[i].str = 0;
	return (structure);
}

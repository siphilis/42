/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 18:00:04 by qdurot            #+#    #+#             */
/*   Updated: 2017/03/29 18:00:35 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

int		ft_wordlen(const char *str)
{
	int	i;

	i = 0;
	if (ft_is_space(str[i]))
		return (-1);
	while (str[i] && (!(ft_is_space(str[i]))))
		i++;
	return (i);
}

int		ft_count_words(const char *str)
{
	int		i;
	int		word;
	int		reading;

	i = 0;
	word = 0;
	reading = 0;
	while (str[i])
	{
		if (ft_is_space(str[i]))
			reading = 0;
		else if (!(ft_is_space(str[i])) && reading == 0)
		{
			reading = 1;
			word++;
		}
		i++;
	}
	return (word);
}

char	*ft_add_to_tab(char *tmp, const char *str)
{
	int		i;
	int		len;

	i = 0;
	len = ft_wordlen(str);
	if (!(tmp = (char*)malloc(sizeof(char) * len + 1)))
		return (0);
	while (i < len)
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

char	**ft_split_whitespaces(const char *str)
{
	int		i;
	int		words;
	int		j;
	char	**tmp;

	i = 0;
	j = 0;
	tmp = 0;
	words = ft_count_words(str);
	if (!(tmp = (char**)malloc(sizeof(*tmp) * (ft_count_words(str) + 1))))
		return (0);
	while (i < words)
	{
		while (ft_is_space(str[j]))
			j++;
		tmp[i] = ft_add_to_tab(tmp[i], &str[j]);
		j += ft_wordlen(&str[j]);
		i++;
	}
	tmp[i] = 0;
	return (tmp);
}

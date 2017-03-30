/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdurot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 20:09:45 by qdurot            #+#    #+#             */
/*   Updated: 2017/03/30 17:09:57 by qdurot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_stock_par
{
	int			size_param;
	char		*str;
	char		*copy;
	char		**tab;
}					t_stock_par;

void				ft_putchar(char c);
int					ft_strlen(char *str);
char				*ft_strdup(char *str);
void				ft_print_words_tables(char **tab);
char				**ft_split_whitespaces(char *str);
void				ft_show_tab(struct s_stock_par *par);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);

#endif

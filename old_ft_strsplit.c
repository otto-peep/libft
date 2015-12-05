/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:57:36 by pconin            #+#    #+#             */
/*   Updated: 2015/12/05 14:53:41 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int		ft_count_words(char const *s, char c)
{
	int	nb;

	nb = 0;
	while (*s != '\0' && s)
	{
		if (*s == c)
			nb++;
		while (*s == c)
			s++;
		s++;	
	}
	return (nb);
}

int	count_char(char *str, int begin, char c)
{
	int i;

	i = begin;
	while ((str[i] != c) && (str[i] != '\0') && (str[i] != '\n'))
	{
		begin++;
		i++;
	}
	i = i + 1;
	return (i);
}


char	**ft_strsplit(char const *s, char c)
{
	char **tab;
	int ind;
	int ind2;
	int ind3;
	char *str;

	ind = 0;
	ind2 = 0;
	ind3 = 0;
	tab = (char **) malloc(sizeof (*tab) * (ft_count_words(s, c) + 1));
	str = (char *) s;
	if (tab == NULL)
		return (NULL);
	while (str[ind] != '\0' && str[ind] != '\n')
	{
		if (str[ind] != '\n' || str[ind] == c)
		{
			while (str[ind] == c)
				ind++;
			ind2 = ind2 + 1;
			ind3 = 0;
		}
		tab[ind2] = malloc(sizeof(**tab) * ((count_char(str, ind, c) + 1)));
		while ((str[ind] != c) && (str[ind] != '\n') && (str[ind] != '\0'))
			tab[ind2][ind3++] = str[ind++];
		tab[ind2][ind3] = '\0';
	}
	tab[ind2 + 1] = 0;
	return (tab);
}	

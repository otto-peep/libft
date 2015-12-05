/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsplit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:09:31 by pconin            #+#    #+#             */
/*   Updated: 2015/12/01 14:31:08 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char *str;
	char c;
	char **tab;
	int a;

	a = 0;
	str = "wwwwhellowwworldwww";
	c = 'w';
	tab = ft_strsplit(str, c);
	while (**tab)
	{
		ft_putstr(tab[a]);
		a++;
	}
	return (0);
}

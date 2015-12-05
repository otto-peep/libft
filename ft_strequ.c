/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 18:21:38 by pconin            #+#    #+#             */
/*   Updated: 2015/11/30 16:15:00 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strequ(char const *s1, char const *s2)
{
	int	a;

	a = 0;
	if (s1 && s2)
	{	
		while (s1[a] == s2[a] && s1[a] && s2[a])
			a++;
		if (s1[a] == '\0' && s2[a] == '\0')
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:29:07 by pconin            #+#    #+#             */
/*   Updated: 2015/11/30 18:48:19 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char *s1;
	const char *s2;
	int	a;

	a = 3; 
	s1 = "he";
	s2 = "helas";
	printf("%i %s", strncmp(s1, s2, a), "\n");
	printf("%i", ft_strncmp(s1, s2, a));
	return (0);
}

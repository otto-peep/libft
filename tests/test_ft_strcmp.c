/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:35:48 by pconin            #+#    #+#             */
/*   Updated: 2015/12/02 18:30:10 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char *s1;
	const char *s2;

	s1 = "\0";
	s2 = "\200";	
	printf("%i %s", strcmp(s1, s2), "\n");
	printf("%i", ft_strcmp(s1, s2));
	return (0);
}


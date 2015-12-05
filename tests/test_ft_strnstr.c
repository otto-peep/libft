/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:18:00 by pconin            #+#    #+#             */
/*   Updated: 2015/12/03 16:20:51 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char *s1;
	const char *s2;
	int a;
	
	s1 = "un deux 9";
	s2 = "deux";
	a = 10;
	printf("%s\n", strnstr(s1, s2, a));
	printf("%s", ft_strnstr(s1, s2, a));
	return (0);
}

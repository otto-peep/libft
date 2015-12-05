/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:51:17 by pconin            #+#    #+#             */
/*   Updated: 2015/12/02 18:01:17 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int		main(void)
{
	const char *str;
	char *yo;
	int a;
	int b;

	str = "		 -2335456 dsdgfgfh 54";
	yo = "  \t\n  \r\r\v\f-899";
	a = ft_atoi(yo);
	b = atoi(yo);
	printf("%i\n", b);
	printf("%i", a);
	return (0);
}

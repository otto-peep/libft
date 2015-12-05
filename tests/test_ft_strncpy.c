/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:44:59 by pconin            #+#    #+#             */
/*   Updated: 2015/12/05 14:59:25 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		main(void)
{
	const char *src = "abc\0\0";
	char dst[6];
	int n = 8;
	const char *src2 = "abc\0\0";
	char dst2[6];
	int n2 = 3;

	strncpy(dst, src, n);
	ft_putstr(dst);
	ft_putstr("--------\n");
	ft_strncpy(dst2, src2, n2);
	ft_putstr(dst2);
	return (0);
}


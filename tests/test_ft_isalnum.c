/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:53:16 by pconin            #+#    #+#             */
/*   Updated: 2015/11/26 14:03:55 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(void)
{
	int a;

	a = 58;
	printf("%i", ft_isalnum(a));
	printf("%i", isalnum(a));
	return (0);
}

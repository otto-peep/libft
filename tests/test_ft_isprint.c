/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:29:29 by pconin            #+#    #+#             */
/*   Updated: 2015/11/26 13:56:12 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	int a;

	a = 127;
	printf("%i", isprint(a));
	printf("%i", ft_isprint(a));
	return (0);
}

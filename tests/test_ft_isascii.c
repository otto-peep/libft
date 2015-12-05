/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:08:50 by pconin            #+#    #+#             */
/*   Updated: 2015/11/26 13:22:58 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int a;

	a = 128;
	printf("%i", ft_isascii(a));
	return (0);
}	

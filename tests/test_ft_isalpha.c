/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:58:07 by pconin            #+#    #+#             */
/*   Updated: 2015/11/26 14:13:49 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(void)
{
	int a;

	a = 't';
	printf("%i", ft_isalpha(a));
	printf("%i", isalpha(a));
	return (0);
}
	

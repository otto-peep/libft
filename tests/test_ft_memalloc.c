/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memalloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:42:43 by pconin            #+#    #+#             */
/*   Updated: 2015/11/27 15:47:00 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	size_t i;
	unsigned char *a;

	i = 5;
	a = (unsigned char *) ft_memalloc(i);
	printf("%s", a);
	return (0);
}

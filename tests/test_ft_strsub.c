/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsub.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:01:08 by pconin            #+#    #+#             */
/*   Updated: 2015/11/27 17:49:56 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char const *s;
	unsigned int start;
	size_t len;

	s = "hello world";
	start = 6;
	len = 4;
	printf("%s", ft_strsub(s, start, len));
	return (0);
}

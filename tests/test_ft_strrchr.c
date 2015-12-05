/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:28:53 by pconin            #+#    #+#             */
/*   Updated: 2015/11/26 17:44:15 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char *s;
	int c;

	s = "hello";
	c = 104; // 109 = null, 104 = hello 108 = lo
	printf("%s", ft_strrchr(s, c));
	printf("%s", strrchr(s, c));
	return (0);
}

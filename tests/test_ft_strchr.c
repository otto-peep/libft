/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:14:26 by pconin            #+#    #+#             */
/*   Updated: 2015/11/26 17:28:44 by pconin           ###   ########.fr       */
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
	c = 109; // 109 = null, 108 = "llo"
	printf("%s", ft_strchr(s, c)); 
	printf("%s", strchr(s, c));
	return (0);
}

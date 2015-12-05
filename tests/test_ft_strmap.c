/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:17:24 by pconin            #+#    #+#             */
/*   Updated: 2015/11/29 18:11:11 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	fonktion(char s)
{
	return (s + 3);
}

int	main(void)
{
	char const *str;

	str = "1";
	printf("%s", ft_strmap(str, fonktion));
	return (0);
}

	

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:46:39 by pconin            #+#    #+#             */
/*   Updated: 2015/11/30 17:09:07 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char *s1;
	const char *s2;

	printf("%s", strstr("bonjour", ""));
	ft_putstr("\n");
	printf("%s", ft_strstr("bonjour", ""));
	return (0);
}

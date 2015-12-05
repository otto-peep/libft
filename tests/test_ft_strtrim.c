/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:27:13 by pconin            #+#    #+#             */
/*   Updated: 2015/12/02 16:36:12 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	*s;
	char	*a;

	a = "hello";
	s = "\t\t\n\t\t   \"), \"";
	printf("%s\n", s);
	ft_putstr("zzzzzi");
	printf("%s", ft_strtrim(a));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:08:32 by pconin            #+#    #+#             */
/*   Updated: 2015/11/26 17:05:28 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int i;
	char s1[50];
	char s2[50];
	char s3[50];
	char s4[50];

	i = 4;
	ft_strcpy(s3, "salut");
	ft_strcpy(s4, "abcdef");
	ft_strcpy(s1, "salut");
	ft_strcpy(s2, "abcdef");
	printf("%s", ft_strncat(s3, s4, i));
	printf("%s", "\n");
	printf("%s", strncat(s1, s2, i));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 15:35:38 by pconin            #+#    #+#             */
/*   Updated: 2015/12/05 19:11:36 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

int             main()
{
	char          *str;
	char          dst[50];
	int	res;

	ft_memset(dst, 'z', 50);	
	strcpy(dst, "hel");
	res = ft_strlcat(dst, "abc", 6);
	printf("%s", dst);
	printf("\n %i", res);
	res = ft_strlcat(dst, "abcd", 2);
	printf("\n%s", dst);
	printf("\n%i", res);

	printf("\n%s\n", "fonction originale:");
	ft_memset(dst, 'z', 50);
	strcpy(dst, "hel");
	res = strlcat(dst, "abc", 6);
	printf("%s", dst);
	printf("\n %i", res);
	res = strlcat(dst, "abcd", 2);
	printf("\n%s", dst);
	printf("\n%i", res);
	return (0);
}

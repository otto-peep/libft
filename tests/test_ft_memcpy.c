/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:45:07 by pconin            #+#    #+#             */
/*   Updated: 2015/11/27 14:16:43 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {

	char s1[3] = "pe";
	char s2[64] = "Magritte";
	char s3[3];
	char s4[64];

	strcpy(s3, s1);
	strcpy(s4, s2);
	printf ("s1 : %s\n", s1);
	printf ("s2 : %s\n", s2);
	printf ("s3  : %s\n", s3);
	printf ("s4 : %s\n", s4);

	memcpy(s1, s2, 3);
	ft_memcpy(s3, s4, 3);

	printf ("s1 : %s\n", s1);
	printf ("s2 : %s\n", s2);
	printf ("s3 : %s\n", s3);
	printf ("s4 : %s\n", s4);
	return 0;

}

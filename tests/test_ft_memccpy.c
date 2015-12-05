/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:51:56 by pconin            #+#    #+#             */
/*   Updated: 2015/12/03 14:05:00 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {

	int a = '\200';
	char s1[64] = "Salut";
	char s2[64] = "test\200string";
	char s3[64];
	char s4[64];

	strcpy(s3, s1);
	strcpy(s4, s2);
	printf ("s1 : %s\n", s1);
	printf ("s2 : %s\n", s2);
	printf ("s3  : %s\n", s3);
	printf ("s4 : %s\n", s4);

	memccpy(s1, s2, a, 12);
	ft_memccpy(s3, s4, a, 12);

	printf ("s1 : %s\n", s1);
	printf ("s2 : %s\n", s2);
	printf ("s3 : %s\n", s3);
	printf ("s4 : %s\n", s4);
	return 0;

}

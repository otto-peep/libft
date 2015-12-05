/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 14:06:36 by pconin            #+#    #+#             */
/*   Updated: 2015/12/03 14:39:31 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {

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

	memmove(s1, s2, 12);
	ft_memmove(s3, s4, 12);

	printf ("s1 : %s\n", s1);
	printf ("s2 : %s\n", s2);
	printf ("s3 : %s\n", s3);
	printf ("s4 : %s\n", s4);
	return 0;

}

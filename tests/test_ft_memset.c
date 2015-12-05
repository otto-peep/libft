/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:21:39 by pconin            #+#    #+#             */
/*   Updated: 2015/11/26 18:28:16 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {

	char s1[64] = "Ceci n'est pas une pipe";
	char s2[64] = "Magritte";

	printf ("s1 : %s\n", s1);
	printf ("s2 : %s\n", s2);

	strncpy(s1, s2, 8);

	printf ("s1 : %s\n", s1);
	printf ("s2 : %s\n", s2);

	s1[8] = '\0';

	printf ("s1 : %s\n", s1);
	printf ("s2 : %s\n", s2);

	s1[8] = '\n';

	printf ("s1 : %s\n", s1);
	printf ("s2 : %s\n", s2);

	memset(s1, 0, 64);

	printf ("s1 : %s\n", s1);
	printf ("s2 : %s\n", s2);

	strncpy(s1, s2, 8);

	printf ("s1 : %s\n", s1);
	printf ("s2 : %s\n", s2);

	s1[8] = '\0';

	printf ("s1 : %s\n", s1);
	printf ("s2 : %s\n", s2);

	s1[8] = '\n';

	printf ("s1 : %s\n", s1);
	printf ("s2 : %s\n", s2);

	return 0;

}


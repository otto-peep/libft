/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:26:57 by pconin            #+#    #+#             */
/*   Updated: 2015/11/25 17:27:40 by pconin           ###   ########.fr       */
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

	ft_bzero(s1, 64);

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

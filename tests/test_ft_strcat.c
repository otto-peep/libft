/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:24:11 by pconin            #+#    #+#             */
/*   Updated: 2015/11/26 15:31:58 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char s1[5];
	char s2[50];
	
	ft_strcpy(s1, "salut");
	ft_strcpy(s2, "yo");
	printf("%s", ft_strcat(s1, s2));
	printf("%s", strcat(s1, s2));
	return (0);
}

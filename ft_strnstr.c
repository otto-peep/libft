/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:17:03 by pconin            #+#    #+#             */
/*   Updated: 2015/12/13 18:15:26 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t index1;
	size_t index2;
	size_t len2;

	len2 = ft_strlen(s2);
	index1 = 0;
	if (!s2[0])
		return ((char*)s1);
	while (index1 < n && s1[index1] != '\0')
	{
		index2 = 0;
		while (s2[index2] == s1[index1 + index2] && s2[index1])
		{
			if (index1 + index2 >= n)
				return (NULL);
			if (index2 == len2 - 1)
				return ((char*)&s1[index1]);
			index2++;
		}
		index1++;
	}
	return (NULL);
}

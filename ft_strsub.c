/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:57:13 by pconin            #+#    #+#             */
/*   Updated: 2015/12/04 18:58:05 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	total;
	unsigned int	index;

	index = 0;
	if (!s)
		return (NULL);
	total = start + len;
	dst = malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	while (start != total)
	{
		dst[index] = s[start];
		start++;
		index++;
	}
	return (dst);
}

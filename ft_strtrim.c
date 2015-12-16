/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:20:56 by pconin            #+#    #+#             */
/*   Updated: 2015/12/14 14:20:32 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_tall(char const *s)
{
	int a;
	int len;
	int i;

	len = ft_strlen(s);
	a = 0;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		a++;
		i++;
	}
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
	{
		a++;
		len--;
	}
	return (a);
}

char		*ft_strtrim(char const *s)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!s)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (ft_strlen(s) - ft_tall(s) + 1));
	if (!res)
		return (NULL);
	while (s[i])
	{
		if (!(s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
			k++;
		if (k)
			res[j++] = s[i];
		i++;
	}
	while (res[j - 1] == ' ' || res[j - 1] == '\n' || res[j - 1] == '\t')
		j--;
	res[j] = '\0';
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:06:18 by pconin            #+#    #+#             */
/*   Updated: 2015/12/14 16:24:10 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	i = 0;
	str = NULL;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	return (str);
}

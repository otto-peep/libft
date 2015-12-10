/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 19:01:30 by pconin            #+#    #+#             */
/*   Updated: 2015/12/10 13:59:07 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;

	newlist = NULL;
	if (lst && f)
	{
		while (lst)
		{
			newlist = ft_lstnew(lst->content, lst->content_size);
			if (newlist == NULL)
				return (NULL);
			newlist = f(newlist);
			newlist = newlist->next;
			lst = lst->next;
		}
		newlist->next = NULL;
	}
	return (newlist);
}

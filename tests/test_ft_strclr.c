/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strclr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:17:08 by pconin            #+#    #+#             */
/*   Updated: 2015/11/24 14:21:01 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char **argv)
{
	argc = 0;
	ft_putstr(argv[1]);
	ft_strclr(argv[1]);
	ft_putchar(argv[1][0]);
	ft_putchar(argv[1][1]);
	ft_putchar(argv[1][2]);
	return(0);
}

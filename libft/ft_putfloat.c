/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 17:51:02 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/27 17:51:22 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putfloat(float d)
{
	int		i;

	i = 0;
	ft_putnbr((int)d);
	d -= (int)d;
	ft_putchar('.');
	if (d)
	{
		while (i++ < 6)
			d *= 10;
		ft_putnbr(d);
	}
	else
		ft_putstr("000000");
}

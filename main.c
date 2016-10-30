/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 18:51:11 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/30 19:42:15 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	int				nb;
	char			*str;

	nb = 42;
	str = "Ma bite";
	printf("%i\n", printf("%s mesure %p cm!\n", str, str));
	ft_putnbr(ft_printf("%s mesure %p cm!\n", str, str));
	ft_putendl("");
	return (0);
}

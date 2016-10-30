/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 18:51:11 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/30 02:43:03 by bfleury          ###   ########.fr       */
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
	printf("%i\n", printf("%s mesure %X cm!\n", str, nb));
	ft_putnbr(ft_printf("%s mesure %X cm!\n", str, nb));
	ft_putendl("");
	return (0);
}

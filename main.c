/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 18:51:11 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/31 13:23:38 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	int				nb;
	int				nb1;
	double			nb2;
	double			nb3;
	char			*str;

	nb = 42;
	nb1 = -42;
	nb2 = 42.5;
	nb3 = -42.5;
	str = "Ma bite";
	ft_putendl("_______________________________________");
	ft_putendl("          -PRINTF %p :");
	printf("%i\n", printf("%s mesure %p cm! ", str, str));
	ft_putnbr(ft_printf("%s mesure %p cm! ", str, str));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %o 42 :");
	printf("%i\n", printf("%s mesure %o cm! ", str, nb));
	ft_putnbr(ft_printf("%s mesure %o cm! ", str, nb));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %o -42 :");
	printf("%i\n", printf("%s mesure %o cm! ", str, nb1));
	ft_putnbr(ft_printf("%s mesure %o cm! ", str, nb1));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %x 42 :");
	printf("%i\n", printf("%s mesure %x cm! ", str, nb));
	ft_putnbr(ft_printf("%s mesure %x cm! ", str, nb));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %x -42 :");
	printf("%i\n", printf("%s mesure %x cm! ", str, nb1));
	ft_putnbr(ft_printf("%s mesure %x cm! ", str, nb1));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %X 42 :");
	printf("%i\n", printf("%s mesure %X cm! ", str, nb));
	ft_putnbr(ft_printf("%s mesure %X cm! ", str, nb));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %X -42 :");
	printf("%i\n", printf("%s mesure %X cm! ", str, nb1));
	ft_putnbr(ft_printf("%s mesure %X cm! ", str, nb1));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %i 42 :");
	printf("%i\n", printf("%s mesure %i cm! ", str, nb));
	ft_putnbr(ft_printf("%s mesure %i cm! ", str, nb));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %i -42 :");
	printf("%i\n", printf("%s mesure %i cm! ", str, nb1));
	ft_putnbr(ft_printf("%s mesure %i cm! ", str, nb1));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %c 42 :");
	printf("%i\n", printf("%s mesure %c cm! ", str, nb));
	ft_putnbr(ft_printf("%s mesure %c cm! ", str, nb));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %c -42 :");
	printf("%i\n", printf("%s mesure %c cm! ", str, nb1));
	ft_putnbr(ft_printf("%s mesure %c cm! ", str, nb1));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %u 42 :");
	printf("%i\n", printf("%s mesure %u cm! ", str, nb));
	ft_putnbr(ft_printf("%s mesure %u cm! ", str, nb));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %u -42 :");
	printf("%i\n", printf("%s mesure %u cm! ", str, nb1));
	ft_putnbr(ft_printf("%s mesure %u cm! ", str, nb1));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %f 42 :");
	printf("%i\n", printf("%s mesure %f cm! ", str, (float)nb));
	ft_putnbr(ft_printf("%s mesure %f cm! ", str, nb));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %f -42 :");
	printf("%i\n", printf("%s mesure %f cm! ", str, (float)nb1));
	ft_putnbr(ft_printf("%s mesure %f cm! ", str, nb1));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %f 42.5 :");
	printf("%i\n", printf("%s mesure %f cm! ", str, nb2));
	ft_putnbr(ft_printf("%s mesure %f cm! ", str, nb2));
	ft_putendl("\n_______________________________________");
	ft_putendl("          -PRINTF %f -42.5 :");
	printf("%i\n", printf("%s mesure %f cm! ", str, nb3));
	ft_putnbr(ft_printf("%s mesure %f cm! ", str, nb3));
	ft_putendl("\n_______________________________________");
	return (0);
}

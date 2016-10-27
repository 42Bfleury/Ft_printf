/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 13:47:23 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/27 17:53:39 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		ft_printf(const char *str, ...)
{
	int			length;
	char		*ptr;
	va_list		ap;

	length = 0;
	ptr = (char*)str;
	va_start(ap, str);
	while (*ptr)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == '%')
				ft_putchar('%');
			else if (*ptr == 'c')
				ft_putchar(va_arg(ap, int));
			else if (*ptr == 's')
				ft_putstr(va_arg(ap, char*));
			else if (*ptr == 'i')
				ft_putnbr(va_arg(ap, int));
			else if (*ptr == 'f')
				ft_putfloat(va_arg(ap, double));
		}
		else
		{
			ft_putchar(*ptr);
			length++;
		}
		ptr++;
	}
	va_end(ap);
	return (length);
}

int		main(void)
{
	printf("%s mesure %f cm!\n", "Ma bite", 42.5);
	ft_putnbr(ft_printf("%s mesure %f cm!\n", "Ma bite", 42.5));
	ft_putendl("");
	return (0);
}

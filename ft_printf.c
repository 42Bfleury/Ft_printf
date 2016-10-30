/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 13:47:23 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/30 02:41:54 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printstr(char *str)
{
	ft_putstr(str);
	return (ft_strlen(str));
}

int		ft_printint(int nb)
{
	ft_putnbr(nb);
	return (ft_intlen(nb));
}

int		ft_printfloat(double nb)
{
	ft_putfloat(nb);
	return (ft_intlen(nb) + 7);
}

int		ft_printoctal(unsigned int nb)
{
	char	*str;

	str = ft_itoa_base(nb, 8);
	ft_putstr(str);
	free(str);
	return (ft_intlen(nb));
}

int		ft_printhexa(unsigned int nb)
{
	char	*str;

	str = ft_itoa_base(nb, 16);
	ft_putstr(str);
	free(str);
	return (ft_intlen(nb));
}

int		ft_printlowerhexa(unsigned int nb)
{
	char	*str;

	str = ft_strlower(ft_itoa_base(nb, 16));
	ft_putstr(str);
	free(str);
	return (ft_intlen(nb));
}

int		convert_format(const char **format, va_list arg)
{
	int		length;

	length = 0;
	(*format)++;
	if (**format == '%')
	{
		ft_putchar('%');
		length++;
	}
	else if (**format == 'c')
	{
		ft_putchar(va_arg(arg, int));
		length++;
	}
	else if (**format == 'C')
		;
	else if (**format == 's')
		length = ft_printstr(va_arg(arg, char*));
	else if (**format == 'S')
		;
	else if (**format == 'p')
		;
	else if (**format == 'd' || **format == 'i')
		length = ft_printint(va_arg(arg, int));
	else if (**format == 'D')
		;
	else if (**format == 'o')
		length = ft_printoctal(va_arg(arg, unsigned int));
	else if (**format == 'O')
		;
	else if (**format == 'u')
		;
	else if (**format == 'U')
		;
	else if (**format == 'x')
		length = ft_printlowerhexa(va_arg(arg, unsigned int));
	else if (**format == 'X')
		length = ft_printhexa(va_arg(arg, unsigned int));
	else if (**format == 'f')
		length = ft_printfloat(va_arg(arg, double));
	return (length);
}

int		parse_format(const char *format, va_list arg)
{
	int		length;

	length = 0;
	while (*format)
	{
		if (*format == '%')
			length += convert_format(&format, arg);
		else
		{
			ft_putchar(*format);
			length++;
		}
		format++;
	}
	return (length);
}

int		ft_printf(const char *format, ...)
{
	int			length;
	va_list		arg;

	if (!format)
		return (-1);
	va_start(arg, format);
	length = parse_format(format, arg);
	va_end(arg);
	return (length);
}

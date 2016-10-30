/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 18:03:38 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/30 18:46:43 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		parse_format(const char *format, va_list arg)
{
	int		length;

	length = 0;
	while (*format)
	{
		if (*format == '%' && format++)
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

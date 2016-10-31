/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 13:47:23 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/31 15:17:40 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

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

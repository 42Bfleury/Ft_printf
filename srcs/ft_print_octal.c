/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_octal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 18:16:01 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/30 20:05:43 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_print_octal(unsigned int nb)
{
	char	*str;

	str = ft_itoa_base(nb, 8);
	ft_putstr(str);
	free(str);
	return (ft_nblen(nb));
}

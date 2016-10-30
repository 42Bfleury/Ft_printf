/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 18:10:46 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/30 19:56:37 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_print_upper_hexa(unsigned long nb)
{
	char	*str;

	str = ft_itoa_base(nb, 16);
	ft_putstr(str);
	free(str);
	return (ft_nblen(nb));
}

int		ft_print_lower_hexa(unsigned long nb)
{
	char	*str;

	str = ft_strlower(ft_itoa_base(nb, 16));
	ft_putstr(str);
	free(str);
	return (ft_nblen(nb));
}

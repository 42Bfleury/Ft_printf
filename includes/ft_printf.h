/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 00:12:01 by bfleury           #+#    #+#             */
/*   Updated: 2025/02/09 00:32:37 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "../libft/includes/libft.h"

int		ft_printf(const char *str, ...);

int		_print_char(int c);
int		_print_str(char *str);
int		_print_integer(int nb);
int		_print_unsigned_integer(unsigned int nb);
int		_print_pointer(unsigned long long pointer);
int		_print_hexa_lower(unsigned long long nb);
int		_print_hexa_upper(unsigned int nb);
#endif

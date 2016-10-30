/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 13:48:42 by bfleury           #+#    #+#             */
/*   Updated: 2016/10/30 02:40:45 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/includes/libft.h"

typedef struct		s_printf
{
	int				length;
	char			*format;
	char			*result;
}					t_printf;

int		ft_printf(const char *str, ...);

#endif

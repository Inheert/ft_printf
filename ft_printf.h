/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:44:36 by tclaereb          #+#    #+#             */
/*   Updated: 2023/12/01 14:24:53 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>
# include <limits.h>
# include "./src/libft/libft.h"

int				arg_c(va_list args);
int				arg_s(va_list args);
int 			arg_d(va_list args);
int				arg_u(va_list args);
int             arg_p(va_list args);
int             arg_x(va_list args, int upper);
int	            arg_percent();
int				ft_printf(const char *format, ...);

#endif
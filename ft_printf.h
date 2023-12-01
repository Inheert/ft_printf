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

void			arg_d(char **content, va_list args);
void			arg_u(char **content, va_list args);
void			arg_c(char **content, va_list args);
void			arg_s(char **content, va_list args);
void			arg_p(char **content, va_list args);
void			arg_lower_x(char **content, va_list args);
void			arg_upper_x(char **content, va_list args);
void			arg_percent(char **content);
int				create_item(unsigned int start, const char *format,
					int size, t_list **lst);
unsigned int	manage_space(const char *format);
unsigned int	manage_symbol(const char *format, t_list **lst, va_list args);
int				ft_printf(const char *format, ...);

#endif
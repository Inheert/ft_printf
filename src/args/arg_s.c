/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:43:12 by tclaereb          #+#    #+#             */
/*   Updated: 2023/12/04 11:48:18 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	arg_s(va_list args)
{
	char	*s;
	int		len;

	s = va_arg(args, char *);
	len = 0;
	if (!s)
		s = "(null)";
	while (*s)
	{
		if (ft_putchar_fd(*s, 1) == -1)
			return (-1);
		len++;
		s++;
	}
	return (len);
}

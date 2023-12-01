/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_x.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:43:12 by tclaereb          #+#    #+#             */
/*   Updated: 2023/12/01 14:46:46 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

char	*concat(uintptr_t n)
{
	char	*adress;
	char	*s;

	adress = ft_putadress_base16(n);
	if (!adress)
		return (NULL);
	s = ft_strjoin("0x", adress);
	free(adress);
	if (!s)
		return (NULL);
	return (s);
}

int arg_p(va_list args)
{
	uintptr_t	n;
	int			len;
	char		*s;
	char		*start;

	n = va_arg(args, uintptr_t);
	len = 0;
	if (!n)
		s = ft_strdup("0x0");
	else
		s = concat(n);
	if (!s)
		return (-1);
	start = s;
	while (*s)
	{
		if (ft_putchar_fd(*s, 1) == -1)
			return (-1);
		s++;
		len++;
	}
	free(start);
	return (len);
}

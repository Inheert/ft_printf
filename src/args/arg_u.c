/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_u.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:43:12 by tclaereb          #+#    #+#             */
/*   Updated: 2023/12/04 11:28:36 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int arg_u(va_list args)
{
    unsigned int	n;
    int				len;
    char			*s;

    n = va_arg(args, unsigned int);
    s = ft_uitoa(n);
    if (!s)
        return (-1);
    len = 0;
    while (*s)
    {
        if (ft_putchar_fd(*s, 1) == -1)
        {
            free(s - len);
            return (-1);
        }
        s++;
        len++;
    }
    free(s - len);
    return (len);
}

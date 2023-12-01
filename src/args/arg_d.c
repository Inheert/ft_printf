/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:43:12 by tclaereb          #+#    #+#             */
/*   Updated: 2023/12/01 14:46:46 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int arg_d(va_list args)
{
    int		n;
    int		len;
    char	*s;

    n = va_arg(args, int);
    s = ft_itoa(n);
    len = 0;
    while (*s)
    {
        if (ft_putchar_fd(*s, 1) == -1)
            return (-1);
        s++;
        len++;
    }
    free(s - len);
    return (len);
}

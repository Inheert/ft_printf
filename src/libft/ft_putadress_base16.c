/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress_base16.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:06:49 by tclaereb          #+#    #+#             */
/*   Updated: 2023/12/04 13:00:42 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countsize(unsigned long long n)
{
	int	count;

	if (n == 0)
		return (2);
	count = 1;
	while (n)
	{
		n = n / 16;
		count++;
	}
	return (count);
}

static void	recursive(char *ptr, unsigned long long n, int *i)
{
	char			*base;

	base = "0123456789abcdef";
	if (n / 16 >= 1)
	{
		recursive(ptr, n / 16, i);
		recursive(ptr, n % 16, i);
	}
	else
	{
		ptr[*i] = base[n];
		(*i)++;
	}
}

char	*ft_putadress_base16(unsigned long long n)
{
	char				*ptr;
	unsigned int		size;
	int					i;

	size = countsize(n);
	i = 0;
	ptr = ft_calloc(size, sizeof(char));
	if (!ptr)
		return (NULL);
	recursive(ptr, n, &i);
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress_base16.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:06:49 by tclaereb          #+#    #+#             */
/*   Updated: 2023/11/20 13:00:54 by tclaereb         ###   ########.fr       */
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

static void	recursive(char *ptr, unsigned long long n, unsigned int size)
{
	char			*base;
	char			*c;

	base = "0123456789abcdef";
	if (n / 16 >= 1)
	{
		recursive(ptr, n / 16, size);
		recursive(ptr, n % 16, size);
	}
	else
	{
		c = ft_substr(base, n, 1);
		ft_strlcat(ptr, c, size);
		free(c);
	}
}

char	*ft_putadress_base16(unsigned long long n)
{
	char				*ptr;
	unsigned int		size;

	size = countsize(n);
	ptr = ft_calloc(size, sizeof(char));
	if (!ptr)
		return (NULL);
	recursive(ptr, n, size);
	return (ptr);
}

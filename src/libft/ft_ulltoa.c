/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:14:37 by tclaereb          #+#    #+#             */
/*   Updated: 2023/11/16 15:05:53 by tclaereb         ###   ########.fr       */
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
		n = n / 10;
		count++;
	}
	return (count);
}

static void	recursive(char *ptr, unsigned long long n, unsigned int size)
{
	char			c[1];

	if (n / 10 >= 1)
	{
		recursive(ptr, n / 10, size);
		recursive(ptr, n % 10, size);
	}
	else
	{
		*c = n + 48;
		ft_strlcat(ptr, c, size);
	}
}

char	*ft_ulltoa(unsigned long long n)
{
	char		*ptr;
	size_t		size;

	size = countsize(n);
	ptr = ft_calloc(size, sizeof(char));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size);
	recursive(ptr, n, size);
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:14:37 by tclaereb          #+#    #+#             */
/*   Updated: 2023/11/20 12:51:09 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countsize(long long n)
{
	int	count;

	if (n == 0)
		return (2);
	count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	recursive(char *ptr, long long n, unsigned int size)
{
	unsigned long long	ln;
	char				c[1];

	if (n < 0)
	{
		ln = (unsigned long long)n * -1;
		*ptr = '-';
	}
	else
		ln = (unsigned long long)n;
	if (ln / 10 >= 1)
	{
		recursive(ptr, ln / 10, size);
		recursive(ptr, ln % 10, size);
	}
	else
	{
		*c = ln + 48;
		ft_strlcat(ptr, c, size);
	}
}

char	*ft_lltoa(long long n)
{
	char	*ptr;
	int		size;

	size = countsize(n);
	ptr = ft_calloc(size, sizeof(char));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size);
	recursive(ptr, n, size);
	return (ptr);
}

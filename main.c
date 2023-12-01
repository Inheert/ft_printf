/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:01:39 by tclaereb          #+#    #+#             */
/*   Updated: 2023/12/01 14:42:03 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	//int a = ft_printf("Hel%clo %c %% Salut yt %u rtr %sNon\n", 'a', 'a', -154, "howe");
	char	*p = "woignprweig";
	int b = ft_printf(" %s %d %i ", "Yo l'equipe", 154, -154);
	ft_putchar_fd('\n', 1);
	int c = printf(" %s %d %i ", "Yo l'equipe", 154, -154);
	printf("\n%d, %d", b, c);
	return (0);
}

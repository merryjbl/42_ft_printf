/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:16:33 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/28 15:29:56 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long hex, int uppercase)
{
	char	*base;
	int		count;

	count = 0;
	if (uppercase == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (hex < 16)
		count += ft_putchar(base[hex]);
	if (hex >= 16)
	{
		count += ft_puthex((hex / 16), uppercase);
		count += ft_putchar(base[hex % 16]);
	}
	return (count);
}

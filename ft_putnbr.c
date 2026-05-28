/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:43:02 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/26 18:26:25 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write (1, "-", 1);
		n *= -1;
		count += 1;
	}
	if (n >= 0 && n < 10)
		count += ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		count += ft_putchar((n % 10) + '0');
	}
	return (count);
}

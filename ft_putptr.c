/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 15:24:53 by mjebali           #+#    #+#             */
/*   Updated: 2026/05/28 15:45:03 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	address;

	count = 2;
	address = (unsigned long)ptr;
	ft_putstr("0x");
	count += ft_puthex(address, 0);
	return (count);
}

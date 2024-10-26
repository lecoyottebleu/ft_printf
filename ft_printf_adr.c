/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_adr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 02:27:30 by mlancelo          #+#    #+#             */
/*   Updated: 2024/10/26 19:11:39 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_digits(unsigned long long int adr)
{
	size_t	digits;

	digits = 0;
	if (adr == 0)
		return (1);
	while (adr != 0)
	{
		digits += 1;
		adr /= 16;
	}
	return (digits);
}

static void	ft_putptr(unsigned long long int adr)
{
	static char	hex[] = "0123456789abcdef";

	if (adr >= 16)
		ft_putptr(adr / 16);
	write(1, &hex[adr % 16], 1);
}

int	ft_putadr(void *adr)
{
	write(1, "0x", 2);
	ft_putptr((unsigned long long int)adr);
	return (ft_digits((unsigned long long int)adr) + 2);
}

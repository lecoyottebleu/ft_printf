/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:53:07 by mlancelo          #+#    #+#             */
/*   Updated: 2024/10/26 19:13:12 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_digits(long int nb)
{
	size_t	digits;

	digits = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		digits += 1;
		nb /= 16;
	}
	return (digits);
}

int	ft_puthex(long int nb, char format)
{
	static char	*hex;

	hex = "0123456789abcdef";
	if (format == 'X')
		hex = "0123456789ABCDEF";
	if (nb >= 16)
		ft_puthex(nb / 16, format);
	write(1, &hex[nb % 16], 1);
	return (ft_digits(nb));
}

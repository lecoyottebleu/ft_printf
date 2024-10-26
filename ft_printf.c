/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 02:26:42 by mlancelo          #+#    #+#             */
/*   Updated: 2024/10/26 19:19:53 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_putnbr(long long int nb)
{
	int				i;
	int				final_nbr[12];
	int				len_print;

	i = 0;
	len_print = 0;
	if (nb == 0)
		ft_putchar('0');
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		len_print++;
	}
	while (nb > 0)
	{
		final_nbr[i++] = nb % 10;
		nb /= 10;
	}
	len_print += i;
	while (i > 0)
		ft_putchar(final_nbr[--i] + '0');
	return (len_print);
}

static int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		ft_putchar(str[i++]);
	}
	return (i);
}

static int	check_char(const char format, va_list *args)
{
	int	len_print;

	len_print = 0;
	if (format == 'c')
		len_print += ft_putchar(va_arg(*args, int));
	else if (format == 's')
		len_print += ft_putstr(va_arg(*args, char *));
	else if (format == 'p')
		len_print += ft_putadr(va_arg(*args, void *));
	else if (format == 'd' || format == 'i')
		len_print += ft_putnbr(va_arg(*args, int));
	else if (format == 'u')
		len_print += ft_putnbr(va_arg(*args, unsigned int));
	else if (format == 'x' || format == 'X')
		len_print += ft_puthex(va_arg(*args, unsigned int), format);
	else if (format == '%')
		len_print += ft_putchar('%');
	return (len_print);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len_print;
	int		i;

	va_start(args, str);
	len_print = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len_print += check_char(str[i + 1], &args);
			i++;
		}
		else
			len_print += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len_print);
}

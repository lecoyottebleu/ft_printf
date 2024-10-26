/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 02:27:24 by mlancelo          #+#    #+#             */
/*   Updated: 2024/10/26 19:20:57 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

char	*ft_strchr(const char *s, int c);
int		ft_printf(const char *(str), ...);
size_t	ft_strlen(const char *s);
int		ft_putadr(void *nb);
int		ft_puthex(long int nb, char format);
int		ft_putchar(int c);

#endif

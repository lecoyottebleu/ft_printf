/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:42:38 by mlancelo          #+#    #+#             */
/*   Updated: 2024/10/23 14:44:26 by mlancelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_printf(const char *(str), ...)
{
    
    return (str);
}

int main()
{
    
    int ft_printf_result = ft_printf("Sentence to know how many %s\n", "characters were written");
    
    ft_printf("%d characters", ft_printf_result);
    
    int result = printf("Sentence to know how many %s\n", "characters were written");
    
    printf("%d characters", result);
}
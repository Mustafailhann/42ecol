/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <muilhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:56:50 by muilhan           #+#    #+#             */
/*   Updated: 2022/12/03 17:24:23 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_evo(va_list args, const char *format, int i)
{
	if (format[i] == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format[i] == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (format[i] == 'd' || format[i] == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (format[i] == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long)));
	else if (format[i] == 'x' || format[i] == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), format[i]));
	else if (format[i] == 'u')
		return (ft_print_unit(va_arg(args, unsigned int)));
	else if (format[i] == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		leng;

	i = 0;
	leng = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			leng += ft_evo(args, format, (i + 1));
			i++;
		}
		else
			leng += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (leng);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <muilhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:56:50 by muilhan           #+#    #+#             */
/*   Updated: 2022/11/26 16:20:45 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_evo(va_list args, const char *format, int i)
{
	int	lenght;

	lenght = 0;
	if (format[i] == 'c')
		lenght += ft_putchar(va_arg(args, int));
	else if (format[i] == 's')
		lenght += ft_print_str(va_arg(args, char *));
	else if (format[i] == 'd' || format[i] == 'i')
		lenght += ft_print_int(va_arg(args, int));
	else if (format[i] == 'p')
		lenght += ft_print_ptr(va_arg(args, unsigned long));
	else if (format[i] == 'x' || format[i] == 'X')
		lenght += ft_print_hex(va_arg(args, unsigned int), format[i]);
	else if (format[i] == 'u')
		lenght += ft_print_unit(va_arg(args, unsigned int));
	else if (format[i] == '%')
		lenght += write(1, '%', 1);
	return (lenght);
}

int	ft_printf(const char *format, ...)
{
	int	i;
	va_list	args;
	int	leng;

	i = 0;
	leng = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			leng += ft_evo(args, format, (i + 1));
		}
		else
			leng += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (leng);
}

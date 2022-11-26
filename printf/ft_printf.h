/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <muilhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:36:04 by muilhan           #+#    #+#             */
/*   Updated: 2022/11/26 18:57:25 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int			ft_putchar(int c);
int			ft_print_unit(unsigned int a);
int			ft_print_str(char *s);
void		ft_print_p(unsigned long long nb);
int			ft_print_ptr(unsigned long long a);
int			ft_print_int(int c);
void		ft_print_h(unsigned int nb, const char format);
int			ft_print_hex(unsigned int a, const char format);
char		*ft_itoa(int n);
#endif
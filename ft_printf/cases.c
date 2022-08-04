/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 04:09:48 by ptunkevi          #+#    #+#             */
/*   Updated: 2022/07/26 16:14:39 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_cases(const char chr, va_list args, int count)
{
	if (!args)
		return (0);
	if (chr == 'c')
		count += ft_putchar(va_arg(args, int));
	if (chr == 's')
		count += ft_putstr(va_arg(args, char *));
	if (chr == '%')
		count += ft_putchar('%');
	if (chr == 'i' || chr == 'd')
		count += ft_putnbr(va_arg(args, int), 0);
	if (chr == 'u')
		count += ft_unsigned(va_arg(args, unsigned int));
	if (chr == 'p')
		count += ft_pointer(va_arg(args, size_t), "0123456789abcdef");
	if (chr == 'x')
		count += ft_hex(va_arg(args, unsigned int), "0123456789abcdef");
	if (chr == 'X')
		count += ft_upperhex(va_arg(args, unsigned int), "0123456789ABCDEF");
	return (count);
}

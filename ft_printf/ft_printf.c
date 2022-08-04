/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 04:11:13 by ptunkevi          #+#    #+#             */
/*   Updated: 2022/07/26 16:41:57 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	count;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{	
			str++;
			if (ft_strchr("cspdiuxX%", *str))
				count = ft_cases(*str, args, count);
			else if (*str == ' ')
			{
				str++;
				continue ;
			}
			else
				count += ft_putchar(*str);
		}
		else
			count += ft_putchar(*str);
		str++;
	}
	return (count);
}

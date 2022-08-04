/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 04:05:37 by ptunkevi          #+#    #+#             */
/*   Updated: 2022/07/26 15:48:22 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

static	size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putstr(char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	return (write(1, str, ft_strlen(str)));
}

int	ft_hex(unsigned int nbr, const char *hex)
{
	int	i;

	i = 0;
	if (nbr == 0)
		i += ft_putchar('0');
	if (nbr >= 16)
	{
		i += ft_hex(nbr / 16, "0123456789abcdef");
		i += ft_hex(nbr % 16, "0123456789abcdef");
	}
	if (nbr < 16 && nbr != 0)
		i += ft_putchar(hex[nbr]);
	return (i);
}

int	ft_upperhex(unsigned int nbr, const char *hex)
{
	int	i;

	i = 0;
	if (nbr >= 16)
	{
		i += ft_upperhex(nbr / 16, "0123456789ABCDEF");
		i += ft_upperhex(nbr % 16, "0123456789ABCDEF");
	}
	if (nbr < 16)
		i += ft_putchar(hex[nbr]);
	return (i);
}

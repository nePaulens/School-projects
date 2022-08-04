/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 04:07:59 by ptunkevi          #+#    #+#             */
/*   Updated: 2022/07/26 16:40:34 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int nbr)
{
	int		i;
	char	c;

	i = 0;
	if (nbr >= 10)
	{
		i += ft_unsigned(nbr / 10);
		i += ft_unsigned(nbr % 10);
	}
	if (nbr < 10)
	{
		c = nbr + '0';
		i += ft_putchar(c);
	}
	return (i);
}

int	ft_pointer(size_t ptr, const char *hex)
{
	if (!ptr)
		return (ft_putstr("0x0"));
	return (ft_putstr("0x") + ft_hex_long(ptr, hex));
}

int	ft_putnbr(int nbr, char c)
{
	int	i;

	i = 0;
	if (nbr == -2147483648)
	{
		i += ft_putstr("-2147483648");
		return (11);
	}
	if (nbr < 0)
	{
		i += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		i += ft_putnbr(nbr / 10, c);
		i += ft_putnbr(nbr % 10, c);
	}
	if (nbr < 10 && nbr != -2147483648)
	{
		c = nbr + '0';
		i += ft_putchar(c);
	}
	return (i);
}

int	ft_hex_long(size_t nbr, const char *hex)
{
	int	i;

	i = 0;
	if (nbr == 0)
		i += ft_putchar('0');
	if (nbr >= 16)
	{
		i += ft_hex_long(nbr / 16, "0123456789abcdef");
		i += ft_hex_long(nbr % 16, "0123456789abcdef");
	}
	if (nbr < 16 && nbr != 0)
		i += ft_putchar(hex[nbr]);
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = (unsigned char) c;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] == '\0' && c != '\0')
		return (0);
	return ((char *)s + i);
}

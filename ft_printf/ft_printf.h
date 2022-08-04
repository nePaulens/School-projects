/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 04:12:39 by ptunkevi          #+#    #+#             */
/*   Updated: 2022/07/26 16:40:55 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
int		ft_unsigned(unsigned int nbr);
int		ft_hex(unsigned int nbr, const char *hex);
int		ft_hex_long(size_t nbr, const char *hex);
int		ft_upperhex(unsigned int nbr, const char *hex);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_pointer(unsigned long int ptr, const char *hex);
int		ft_cases(const char chr, va_list args, int count);
int		ft_putnbr(int nbr, char c);
char	*ft_strchr(const char *s, int c);

#endif

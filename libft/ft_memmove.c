/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptunkevi <ptunkevi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:04:47 by ptunkevi          #+#    #+#             */
/*   Updated: 2022/06/06 14:21:31 by ptunkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	char	*d2;
	char	*s2;

	d = (char *)dest;
	s = (char *)src;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		s2 = s + (n - 1);
		d2 = d + (n - 1);
		while (n--)
			*d2-- = *s2--;
	}
	return (dest);
}

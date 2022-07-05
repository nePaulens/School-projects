/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptunkevi <ptunkevi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:43:31 by ptunkevi          #+#    #+#             */
/*   Updated: 2022/06/08 22:46:56 by ptunkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		len;
	char		*ptr;

	ptr = (char *) s;
	len = 0;
	if (c > 0)
		c = (unsigned char)(c);
	while (len < n)
	{
		if (ptr[len] == c)
			return (&ptr[len]);
		len++;
	}
	return (NULL);
}

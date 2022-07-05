/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptunkevi <ptunkevi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:33:21 by ptunkevi          #+#    #+#             */
/*   Updated: 2022/06/08 22:18:13 by ptunkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = (unsigned char)(c);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		else
			i++;
	}
	if (s[i] == '\0' && c == '\0')
		return ((char *)s + i);
	return (0);
}

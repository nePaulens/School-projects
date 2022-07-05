/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptunkevi <ptunkevi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:20:16 by ptunkevi          #+#    #+#             */
/*   Updated: 2022/06/09 00:54:39 by ptunkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t length)
{
	size_t	i;
	char	*p;

	if (!s)
		return (0);
	if ((ft_strlen(s) + start) < length)
		length = ft_strlen(s) + start;
	if (ft_strlen(s) <= start)
		length = 0;
	p = (char *)malloc((length + 1) * sizeof(char));
	if (!p)
		return (0);
	i = 0;
	while (i < length)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

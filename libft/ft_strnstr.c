/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptunkevi <ptunkevi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:09:17 by ptunkevi          #+#    #+#             */
/*   Updated: 2022/06/08 16:44:16 by ptunkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*need;
	const char	*hayhay;
	size_t		save_len;

	need = needle;
	if (*needle == '\0')
		return ((char *)haystack);
	while (len && *haystack)
	{
		if (*haystack == *needle)
		{
			hayhay = haystack;
			save_len = len;
			while ((*haystack++ == *needle++) && (len-- != 0))
				if (*needle == 0)
					return ((char *)hayhay);
			haystack = hayhay;
			len = save_len;
			needle = need;
		}
		len--;
		haystack++;
	}
	return (0);
}

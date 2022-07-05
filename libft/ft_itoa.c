/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptunkevi <ptunkevi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:51:57 by ptunkevi          #+#    #+#             */
/*   Updated: 2022/06/12 20:42:34 by ptunkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_alloc(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*fnl;
	int				size;
	unsigned int	nb;

	size = ft_alloc(n) + 1;
	fnl = (char *)malloc(size * sizeof(char));
	if (!fnl)
		return (NULL);
	if (n < 0)
		nb = -n;
	else
		nb = n;
	fnl[--size] = 0;
	while (--size >= 0 && nb)
	{
		fnl[size] = '0' + nb % 10;
		nb /= 10;
	}
	if (n < 0)
		fnl[0] = '-';
	if (n == 0)
		fnl[0] = '0';
	return (fnl);
}

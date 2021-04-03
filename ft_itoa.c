/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 16:35:33 by nfranco-          #+#    #+#             */
/*   Updated: 2020/03/10 20:34:34 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countdigits(int n)
{
	int		i;
	long	nr;

	i = 0;
	nr = n;
	if (nr == 0)
		return (1);
	if (nr < 0)
	{
		nr = nr * -1;
		i++;
	}
	while (nr > 0)
	{
		nr = nr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*str;
	int		len;

	nbr = n;
	len = ft_countdigits(nbr);
	if (!(str = ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	len--;
	while (nbr >= 10)
	{
		str[len] = (nbr % 10) + 48;
		nbr = nbr / 10;
		len--;
	}
	str[len] = nbr + 48;
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 14:27:04 by nfranco-          #+#    #+#             */
/*   Updated: 2020/03/10 19:12:57 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest2;
	const char	*src2;

	i = 0;
	dest2 = dst;
	src2 = src;
	if ((!dst && !src) && len > 0)
		return (NULL);
	if (dest2 > src2)
	{
		i = len;
		while (i > 0)
		{
			dest2[i - 1] = src2[i - 1];
			i--;
		}
	}
	else
		while (i < len)
		{
			dest2[i] = src2[i];
			i++;
		}
	return (dst);
}

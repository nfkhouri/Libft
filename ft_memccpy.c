/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 14:23:44 by nfranco-          #+#    #+#             */
/*   Updated: 2020/03/02 14:45:36 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp_src;
	unsigned char	*temp_dest;

	i = 0;
	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dst;
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		if (temp_dest[i] == (unsigned char)c)
			return ((void *)(temp_dest + i + 1));
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 14:32:57 by nfranco-          #+#    #+#             */
/*   Updated: 2020/03/02 14:52:02 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*temp1;
	const unsigned char	*temp2;
	size_t				i;

	temp1 = s1;
	temp2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (--n && temp1[i] == temp2[i])
		i++;
	return (temp1[i] - temp2[i]);
}

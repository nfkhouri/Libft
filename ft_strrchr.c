/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:02:34 by nfranco-          #+#    #+#             */
/*   Updated: 2020/03/10 19:46:21 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *new;

	new = 0;
	while (*s)
	{
		if (*s == c)
			new = ((char *)s);
		s++;
	}
	if (new)
		return (new);
	if (c == '\0')
		return ((char *)s);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 14:05:25 by nfranco-          #+#    #+#             */
/*   Updated: 2020/03/10 19:49:26 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	int		l;

	i = 0;
	l = ft_strlen(needle);
	if (l == 0 || !needle)
		return ((char *)haystack);
	l--;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && j <= l && (i + j) < len)
		{
			if (j == l)
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

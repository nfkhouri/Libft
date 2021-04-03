/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:48:17 by nfranco-          #+#    #+#             */
/*   Updated: 2020/03/10 19:35:53 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;
	int				value;

	i = 0;
	value = 0;
	if (n == 0)
		return (0);
	while (value == 0 && (s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		value = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	return (value);
}

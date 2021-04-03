/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 14:12:29 by nfranco-          #+#    #+#             */
/*   Updated: 2020/03/02 14:43:04 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr2;
	size_t	i;
	char	*ptr1;

	i = 0;
	ptr2 = malloc(count * size);
	ptr1 = ptr2;
	if (ptr1 == NULL)
		return (NULL);
	while (i < (count * size))
	{
		*ptr1 = '\0';
		ptr1++;
		i++;
	}
	return (ptr2);
}

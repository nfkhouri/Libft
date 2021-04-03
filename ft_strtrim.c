/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:10:13 by nfranco-          #+#    #+#             */
/*   Updated: 2020/03/10 20:22:04 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iscontained(char a, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		begin;
	int		end;
	char	*strtrimmed;

	begin = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (ft_iscontained(s1[begin], set) == 1 && s1[begin])
		begin++;
	if (s1[begin] == '\0')
		return (strtrimmed = ft_calloc(1, sizeof(char)));
	while (ft_iscontained(s1[end], set) == 1)
		end--;
	strtrimmed = ft_substr(s1, begin, (end + 1) - begin);
	if (!strtrimmed)
		return (NULL);
	return (strtrimmed);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 19:21:43 by nfranco-          #+#    #+#             */
/*   Updated: 2020/03/02 19:43:35 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long nr;

	nr = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nr *= -1;
	}
	if (nr > 10)
	{
		ft_putnbr_fd(nr / 10, fd);
		ft_putnbr_fd(nr % 10, fd);
	}
	else
		ft_putchar_fd(nr + 48, fd);
}

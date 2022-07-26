/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:29:35 by afakili           #+#    #+#             */
/*   Updated: 2022/02/13 02:29:35 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	s[10];
	int		i;
	long	nbr;

	i = 0;
	nbr = n;
	if (nbr == 0)
		write(fd, "0", 1);
	if (nbr < 0)
	{
		nbr *= -1;
		write(fd, "-", 1);
	}
	while (nbr)
	{
		s[i++] = nbr % 10 + 48;
		nbr /= 10;
	}
	while (i--)
		write(fd, s + i, 1);
}

// int main()
// {
// 	int n = 5;
// 	ft_putnbr_fd(n, 1);
// }
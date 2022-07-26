/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_xpm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:22:26 by afakili           #+#    #+#             */
/*   Updated: 2022/07/26 19:22:38 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_xpm(void)
{
	int	fd_0;
	int	fd_1;
	int	fd_c;

	fd_0 = open("./maps/0.xpm", O_RDWR);
	fd_1 = open("./maps/1.xpm", O_RDWR);
	fd_c = open("./maps/c.xpm", O_RDWR);
	if (fd_0 <= 0 || fd_1 <= 0 || fd_c <= 0)
	{
		ft_printf("XPM File Error!\n");
		close(fd_0);
		close(fd_1);
		close(fd_c);
		exit(1);
	}
	close(fd_0);
	close(fd_1);
	close(fd_c);
}

void	check_xpm_2(void)
{
	int	fd_e;
	int	fd_p;

	fd_e = open("./maps/e.xpm", O_RDWR);
	fd_p = open("./maps/p.xpm", O_RDWR);
	if (fd_e <= 0 || fd_p <= 0)
	{
		ft_printf("XPM File Error!\n");
		close(fd_e);
		close(fd_p);
		exit(1);
	}
	close(fd_e);
	close(fd_p);
}

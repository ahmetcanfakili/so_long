/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:16:23 by afakili           #+#    #+#             */
/*   Updated: 2022/06/01 15:16:23 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_map_wall(t_data *data)
{
	size_t	i;

	i = 0;
	while (data->map[i])
	{
		if (data->map[i][0] != '1' || data->map[i][data->map_width - 1] != '1')
		{
			ft_printf("The Map Is Not Surrounded By Walls!");
			exit (1);
		}
		i++;
	}
	i = 0;
	while (data->map[0][i] && data->map[data->map_height - 1][i])
	{
		if (data->map[0][i] != '1' || data->map[data->map_height - 1][i] != '1')
		{
			ft_printf("The Map Is Not Surrounded By Walls!");
			exit (1);
		}
		i++;
	}
}

void	check_rectangle_map(t_data *data)
{
	size_t	i;

	i = 0;
	while (i != data->map_height)
	{
		if (ft_strlen1(data->map[i]) != data->map_width)
		{
			ft_printf("The Map Is Not Rectangle");
			exit (1);
		}
	i++;
	}
}

void	check_ber_extension(char *file)
{
	size_t	size;

	size = ft_strlen1(file) - 1;
	if (!(file[size - 3] == '.' && file[size - 2] == 'b' \
		&& file[size - 1] == 'e' && file[size] == 'r'))
	{
		ft_printf("Unknown Map Extension!\n");
		exit (1);
	}	
}

void	check_map_assets(t_data *data)
{
	int		player;
	int		door;
	int		unknown;
	char	*temp;

	temp = data->ttl_str;
	player = 0;
	door = 0;
	unknown = 0;
	while (*temp)
	{
		if (*temp == 'P')
			player++;
		else if (*temp == 'C')
			data->collectible++;
		else if (*temp == 'E')
			door++;
		else if (*temp != '0' && *temp != '1' && *temp != '\n')
			unknown++;
		temp++;
	}
	if (!(player == 1 && data->collectible >= 1 && door >= 1 && unknown == 0))
	{
		ft_printf("Assets Error!\n");
		exit (1);
	}	
}

void	check_blank_map(char *tmp)
{
	if (!tmp)
	{
		ft_printf("Error! Blank Map\n");
		exit (1);
	}
}

void	check_xpm(void)
{
	int	fd_0;
	int	fd_1;
	int	fd_c;
	int	fd_e;
	int	fd_p;

	fd_0 = open("./maps/0.xpm", O_RDWR);
	fd_1 = open("./maps/1.xpm", O_RDWR);
	fd_c = open("./maps/c.xpm", O_RDWR);
	fd_e = open("./maps/e.xpm", O_RDWR);
	fd_p = open("./maps/p.xpm", O_RDWR);
	if (fd_0 <= 0 || fd_1 <= 0 || fd_c <= 0 || fd_e <= 0 || fd_p <= 0)
	{
		ft_printf("XPM File Error!\n");
		close(fd_0);
		close(fd_1);
		close(fd_c);
		close(fd_e);
		close(fd_p);
		exit(1);
	}
	close(fd_0);
	close(fd_1);
	close(fd_c);
	close(fd_e);
	close(fd_p);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:16:25 by afakili           #+#    #+#             */
/*   Updated: 2022/06/01 15:16:25 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	take_image(t_data *data)
{
	data->img = malloc(sizeof(void *) * 5);
	data->img[0] = mlx_xpm_file_to_image(data->mlx, PLAYER, \
		&data->img_width, &data->img_height);
	data->img[1] = mlx_xpm_file_to_image(data->mlx, GROUND, \
		&data->img_width, &data->img_height);
	data->img[2] = mlx_xpm_file_to_image(data->mlx, WALL, \
		&data->img_width, &data->img_height);
	data->img[3] = mlx_xpm_file_to_image(data->mlx, COLLECTABLE, \
		&data->img_width, &data->img_height);
	data->img[4] = mlx_xpm_file_to_image(data->mlx, DOOR, \
		&data->img_width, &data->img_height);
}

void	read_map(t_data *data, char *file)
{
	size_t	i;
	int		fd;
	char	**map;
	int		m;

	i = 0;
	map = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{		
		ft_printf("File Error!\n");
		exit (1);
	}
	check_ber_extension(file);
	read_map_helper(data, fd);
	m = 0;
	while (data->map[i++])
	{
		m++;
		data->map_height = m;
	}
	check_rectangle_map(data);
	check_map_assets(data);
	check_map_wall(data);
}

void	read_map_helper(t_data *data, int fd)
{
	char	*total_str;
	char	*line;

	total_str = 0;
	while (1)
	{
		line = get_next_line(fd);
		if (line == 0)
			break ;
		if (*line == '\n')
		{
			printf("The Map Cannot Contain Blank Lines!");
			exit(1);
		}
		data->map_width = ft_strlen1(line);
		total_str = ft_strjoin1(total_str, line);
		free(line);
	}
	check_blank_map(total_str);
	data->ttl_str = total_str;
	data->map = ft_split(total_str, '\n');
}

void	game_finish(t_data *data)
{
	ft_printf("Total Score: %d", data->xp * 1000);
	ft_img_free(data);
	mlx_destroy_window(data->mlx, data->mlx_win);
	ft_map_free(data);
	free(data);
	exit(1);
}

int	x_button(t_data *data)
{
	game_finish(data);
	return (0);
}

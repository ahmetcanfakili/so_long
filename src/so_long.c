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

void	print_screen(t_data *data)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while ((j != data->map_width) && k != data->map_height)
	{
		mlx_put_image_to_window(data->mlx, data->mlx_win, \
			data->img[1], 64 * j, 64 * k);
		j++;
		if (j == data->map_width)
		{
			j = 0;
			k++;
		}
	}
	data->img_xpos = 0;
	data->img_ypos = 0;
	while (data->ttl_str[i])
	{
		if (data->ttl_str[i] == 'P')
		{
			mlx_put_image_to_window(data->mlx, data->mlx_win, \
			data->img[0], data->img_xpos, data->img_ypos);
			data->index = i;
		}
		else if (data->ttl_str[i] == '1')
			mlx_put_image_to_window(data->mlx, data->mlx_win, \
				data->img[2], data->img_xpos, data->img_ypos);
		else if (data->ttl_str[i] == 'C')
			mlx_put_image_to_window(data->mlx, data->mlx_win, \
				data->img[3], data->img_xpos, data->img_ypos);
		else if (data->ttl_str[i] == 'E')
			mlx_put_image_to_window(data->mlx, data->mlx_win, \
				data->img[4], data->img_xpos, data->img_ypos);
		data->img_xpos += 64;
		if (data->ttl_str[i] == '\n')
		{
			data->img_xpos = 0;
			data->img_ypos += 64;
		}
		i++;
	}	
}

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
	char	*line;
	char	*total_str;
	char	**map;
	int		m;

	i = 0;
	total_str = 0;
	map = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{		
		ft_printf("File Error!\n");
		exit (1);
	}
	check_ber_extension(file);
	while (1)
	{
		line = get_next_line(fd);
		if (line == 0)
			break ;
		data->map_width = ft_strlen1(line);
		total_str = ft_strjoin1(total_str, line);
	}
	check_blank_map(total_str);
	data->ttl_str = total_str;
	data->map = ft_split(total_str, '\n');
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:29:05 by afakili           #+#    #+#             */
/*   Updated: 2022/07/27 02:04:52 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_screen(t_data *data)
{
	int	i;

	i = 0;
	print_background(data);
	data->img_xpos = 0;
	data->img_ypos = 0;
	while (data->ttl_str[i])
	{
		print_screen_helper(data, i);
		data->img_xpos += 64;
		if (data->ttl_str[i] == '\n')
		{
			data->img_xpos = 0;
			data->img_ypos += 64;
		}
		i++;
	}	
}

void	print_screen_helper(t_data *data, int i)
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
}

void	print_background(t_data *data)
{
	int	j;
	int	k;

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
}

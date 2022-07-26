/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:35:15 by afakili           #+#    #+#             */
/*   Updated: 2022/07/26 15:03:50 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	moveup(t_data *data)
{
	if (data->ttl_str[data->index - data->map_width - 1] != '1' && \
		(data->ttl_str[data->index - data->map_width - 1] != 'E' \
			|| data->xp == data->collectible))
	{
		data->step++;
		data->ttl_str[data->index] = '0';
		if (data->ttl_str[data->index - data->map_width - 1] == 'C')
			data->xp++;
		if (data->ttl_str[data->index - data->map_width - 1] == 'E')
			game_finish(data);
		data->ttl_str[data->index - data->map_width - 1] = 'P';
		ft_printf("%d\n", data->step);
	}
}

void	movedown(t_data *data)
{
	if (data->ttl_str[data->index + data->map_width + 1] != '1' && \
		(data->ttl_str[data->index + data->map_width + 1] != 'E' \
			|| data->xp == data->collectible))
	{
		data->step++;

		data->ttl_str[data->index] = '0';
		if (data->ttl_str[data->index + data->map_width + 1] == 'C')
			data->xp++;
		if (data->ttl_str[data->index + data->map_width + 1] == 'E')
			game_finish(data);
		data->ttl_str[data->index + data->map_width + 1] = 'P';
		ft_printf("%d\n", data->step);
	}
}

void	moveleft(t_data *data)
{
	if (data->ttl_str[data->index - 1] != '1' && \
		(data->ttl_str[data->index - 1] != 'E' \
			|| data->xp == data->collectible))
	{
		data->step++;

		data->ttl_str[data->index] = '0';
		if (data->ttl_str[data->index - 1] == 'C')
			data->xp++;
		if (data->ttl_str[data->index - 1] == 'E')
			game_finish(data);
		data->ttl_str[data->index - 1] = 'P';
		ft_printf("%d\n", data->step);
	}
}

void	moveright(t_data *data)
{
	if (data->ttl_str[data->index + 1] != '1' && \
		(data->ttl_str[data->index + 1] != 'E'\
			|| data->xp == data->collectible))
	{
		data->step++;

		data->ttl_str[data->index] = '0';
		if (data->ttl_str[data->index + 1] == 'C')
			data->xp++;
		if (data->ttl_str[data->index + 1] == 'E')
			game_finish(data);
		data->ttl_str[data->index + 1] = 'P';
		ft_printf("%d\n", data->step);
	}
}

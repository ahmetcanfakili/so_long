/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:48:18 by afakili           #+#    #+#             */
/*   Updated: 2022/07/26 19:08:20 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_img_free(t_data *data)
{
	int	i;

	i = -1;
	while (++i < 5)
		mlx_destroy_image(data->mlx, data->img[i]);
		
	free(data->img);
}

void	ft_map_free(t_data *data)
{
	int	i;

	i = 0;
	while (data->map[i])
	{
		free(data->map[i]);
		data->map[i++] = NULL;
	}
	free(data->map);
}


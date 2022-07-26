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

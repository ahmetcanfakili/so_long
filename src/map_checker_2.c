/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:48:06 by afakili           #+#    #+#             */
/*   Updated: 2022/07/26 19:48:48 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
		check_map_assets_helper();
	}	
}

void	check_map_assets_helper(void)
{
	ft_printf("Assets Error!\n");
	exit (1);
}

void	check_blank_map(char *tmp)
{
	if (!tmp)
	{
		ft_printf("Error! Blank Map\n");
		exit (1);
	}
}

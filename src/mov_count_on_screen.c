/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_count_on_screen.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 19:09:52 by afakili           #+#    #+#             */
/*   Updated: 2022/06/26 19:09:53 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	mov_count_on_screen(t_data *data)
{
	char	*variable;

	variable = ft_itoa(data->xp * 1000);
	mlx_string_put(data->mlx, data->mlx_win, 0, 20, 0xffff99, "Game Point: ");
	mlx_string_put(data->mlx, data->mlx_win, 80, 20, 0xffff99, variable);
	free(variable);
	variable = ft_itoa(data->step);
	mlx_string_put(data->mlx, data->mlx_win, 150, 20, 0xffff99, "Step: ");
	mlx_string_put(data->mlx, data->mlx_win, 200, 20, 0xffff99, variable);
	free(variable);
}

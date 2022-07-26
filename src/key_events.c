/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_events.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:04:18 by afakili           #+#    #+#             */
/*   Updated: 2022/06/26 19:04:26 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_events(int keycode, t_data *data)
{
	if (keycode == KEY_ESCAPE)
		game_finish(data);
	else if (keycode == KEY_W || keycode == KEY_ARROW_UP)
		moveup(data);
	else if (keycode == KEY_A || keycode == KEY_ARROW_LEFT)
		moveleft(data);
	else if (keycode == KEY_S || keycode == KEY_ARROW_DOWN)
		movedown(data);
	else if (keycode == KEY_D || keycode == KEY_ARROW_RIGHT)
		moveright(data);
	mlx_clear_window(data->mlx, data->mlx_win);
	print_screen(data);
	mov_count_on_screen(data);
	return (0);
}

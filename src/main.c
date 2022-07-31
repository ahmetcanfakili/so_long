/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:14:06 by afakili           #+#    #+#             */
/*   Updated: 2022/06/01 15:14:06 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc == 2)
	{
		check_xpm();
		check_xpm_2();
		data = ft_calloc(sizeof(t_data), 1);
		if (!data)
			exit (1);
		check_mlx(data);
		read_map(data, argv[1]);
		data->mlx_win = mlx_new_window(data->mlx, 64 * data->map_width, \
			64 * data->map_height, "|| 42 ISTANBUL GAME STUDIO ||");
		take_image(data);
		print_screen(data);
		mlx_hook(data->mlx_win, 2, 1L << 0, key_events, data);
		mlx_hook(data->mlx_win, 17, 0, x_button, data);
		mov_count_on_screen(data);
		system("leaks so_long");
		mlx_loop(data->mlx);
	}
	else
		ft_printf("Argument Error!\n");
	exit (1);
}

void	check_mlx(t_data *data)
{
	data->mlx = mlx_init();
	if (data->mlx == NULL)
	{
		ft_printf("mlx_init() Error!\n");
		free(data);
		exit(1);
	}
}

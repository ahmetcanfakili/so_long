/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:24:27 by afakili           #+#    #+#             */
/*   Updated: 2022/06/01 15:24:27 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <fcntl.h>
# include "../mlx/mlx.h"
# include "../utils/get_next_line/get_next_line.h"
# include "../utils/libft/libft.h"
# include "../utils/ft_printf/ft_printf.h"

# define PLAYER "maps/p.xpm"
# define GROUND "maps/0.xpm"
# define WALL "maps/1.xpm"
# define COLLECTABLE "maps/c.xpm"
# define DOOR "maps/e.xpm"

# define KEY_ARROW_LEFT		123
# define KEY_ARROW_RIGHT	124
# define KEY_ARROW_DOWN		125
# define KEY_ARROW_UP		126
# define KEY_ESCAPE			53
# define KEY_W				13
# define KEY_A				0
# define KEY_S				1
# define KEY_D				2

typedef struct s_data {
	void	*mlx;
	void	*mlx_win;
	char	*ttl_str;
	void	**img;
	char	**map;
	size_t	map_width;
	size_t	map_height;
	int		img_width;	
	int		img_height;
	int		img_xpos;
	int		img_ypos;
	int		index;
	int		xp;
	int		collectible;
	int		step;
}	t_data;

int		key_events(int keycode, t_data *data);
void	print_screen(t_data *data);
void	take_image(t_data *data);
void	read_map(t_data *data, char *file);
void	check_blank_map(char *tmp);
void	check_ber_extension(char *file);
void	check_rectangle_map(t_data *data);
void	check_map_wall(t_data *data);
void	check_map_assets(t_data *data);
void	game_finish(t_data *data);
int		x_button(t_data *data);
void	moveup(t_data *data);
void	moveleft(t_data *data);
void	movedown(t_data *data);
void	moveright(t_data *data);
void	mov_count_on_screen(t_data *data);
void	check_xpm(void);
void	check_mlx(t_data *data);
void	ft_img_free(t_data *data);
void	ft_map_free(t_data *data);

#endif
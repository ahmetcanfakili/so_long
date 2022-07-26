NAME = so_long
CC = gcc
RM = rm -rf

MFLAGS = utils/get_next_line/get_next_line.a utils/libft/libft.a mlx/libmlx.a utils/ft_printf/libftprintf.a 

AFLAGS =  -Wall -Wextra -Werror -I./mlx -I.utils/libft -I.utils/get_next_line -I.utils/ft_printf

SRCS = src/main.c src/map_checker.c src/so_long.c src/key_events.c src/move_player.c src/mov_count_on_screen.c

OBJS = $(SRCS:.c=.o)

$(MFLAGS):
	make -C utils/libft
	make -C utils/get_next_line
	make -C utils/ft_printf
	make -C mlx/

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(MFLAGS) $(AFLAGS) -framework OpenGL -framework AppKit -o $(NAME)

all :$(MFLAGS) $(NAME)

fclean : clean
	$(RM) utils/libft/*.a
	$(RM) src/*.a
	$(RM) utils/get_next_line/*.a
	$(RM) utils/ft_printf/*.a
	$(RM) mlx/*.a
	$(RM) $(NAME)

clean :
	$(RM) utils/libft/*.o
	$(RM) src/*.o
	$(RM) utils/get_next_line/*.o
	$(RM) utils/ft_printf/*.o
	$(RM) mlx/*.o

re : fclean all

.PHONY : all bonus fclean clean re
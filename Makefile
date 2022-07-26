NAME = so_long
CC = gcc
RM = rm -rf
MFLAGS = utils/get_next_line/get_next_line.a utils/libft/libft.a mlx/libmlx.a utils/ft_printf/libftprintf.a 
AFLAGS =  -Wall -Wextra -Werror -I./mlx -I.utils/libft -I.utils/get_next_line -I.utils/ft_printf
SRCS = src/main.c src/map_checker.c src/so_long.c src/key_events.c src/move_player.c src/free.c src/check_xpm.c src/map_checker_2.c src/print.c
SRCS_BONUS = bonus/mov_count_on_screen.c

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:bonus/.c=.o)

all :$(MFLAGS) $(NAME)

$(MFLAGS):
	make -C utils/libft
	make -C utils/get_next_line
	make -C utils/ft_printf
	make -C mlx/

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(MFLAGS) $(AFLAGS) -framework OpenGL -framework AppKit -o $(NAME)

bonus: $(MFLAGS) $(NAME)_bonus

$(NAME)_bonus : $(OBJS) $(OBJS_BONUS)
	$(CC) $(OBJS) $(MFLAGS) $(OBJS_BONUS) $(AFLAGS) -framework OpenGL -framework AppKit -o $(NAME)_bonus

fclean : clean
	$(RM) utils/libft/*.a
	$(RM) src/*.a
	$(RM) utils/get_next_line/*.a
	$(RM) utils/ft_printf/*.a
	$(RM) mlx/*.a
	$(RM) $(NAME)
	$(RM) $(NAME)_bonus 

clean :
	$(RM) utils/libft/*.o
	$(RM) src/*.o
	$(RM) utils/get_next_line/*.o
	$(RM) utils/ft_printf/*.o
	$(RM) mlx/*.o
	$(RM) bonus/mov_count_on_screen.o

re : fclean all

.PHONY : all bonus fclean clean re
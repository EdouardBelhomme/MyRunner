##
## EPITECH PROJECT, 2022
## B-MUL-100-BDX-1-1-myrunner-edouard.belhomme
## File description:
## Makefile
##

NAME	= my_runner

CC	= gcc

RM	= rm -f

SRCS	= ./src/game/draw_sprite.c \
	  ./src/game/fill_sprites.c \
	  ./src/game/game_loop.c \
	  ./src/game/jump.c \
	  ./src/game/movements.c \
	  ./src/game/set_positions.c \
	  ./src/main.c \
	  ./src/window/close_window.c \
	  ./src/game/scale.c \
	  ./src/my_strcmp.c \
	  ./src/game/help.c \
	  ./src/my_putchar.c \
	  ./src/my_putstr.c \
	  ./src/game/lose.c \
	  ./src/game/score.c \

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -Wall -Wextra -g

LDFLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

##
## EPITECH PROJECT, 2019
## makefile
## File description:
## make
##

SRC     = 	src/destroy.c	\
			src/display.c	\
			src/draw_sprite.c	\
			src/move_sprite.c	\
			src/my_hunter.c	\
			src/reload_sprite.c	\
			src/set_textureandmusic.c	\
			src/texture_rect.c	\
			src/button.c	\
			src/mouse_scop.c	\
			src/main2fct.c	\
			src/pos_logo.c

OBJ     =       $(SRC:.c=.o)

NAME    =       my_hunter

all:    $(NAME)

$(NAME):        $(OBJ)
	gcc -lcsfml-window -lcsfml-graphics -lcsfml-system -lcsfml-audio -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     flcean all

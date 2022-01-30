##
## EPITECH PROJECT, 2021
## Makefile do_op
## File description:
## makefile
##

OBJ = $(SRC:.c=.o)

LIB = -L./lib/my -lmy


SRC	= 	$(wildcard *.c)

CFLAGS = -I./include

NAME = mysh

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my/
	gcc $(CFLAGS) $(OBJ) $(LIB) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	cd ./lib/my ; $(MAKE) -f Makefile fclean

re:	fclean all
	make clean
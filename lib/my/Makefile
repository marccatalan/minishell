##
## EPITECH PROJECT, 2021
## d10
## File description:
## x


SRC	=	$(wildcard *.c)

OBJ	= 	$(SRC:.c=.o) ##Quitar los .c

NAME	=	libmy.a  ##Nombre archivo

$(NAME):	$(OBJ)
		ar rc   $(NAME) $(OBJ)
		cp libmy.a ../
		cp my.h	../../include

all:	$(NAME)

copy:   $(COPY)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

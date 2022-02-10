##
## EPITECH PROJECT, 2019
## PSU_my_printf_2018
## File description:
## Makefile
##

NAME	= libmy.a

CC	= gcc

RM	= rm -f

SRCS	= ./check_flags.c \
	  ./flags/flag_bin.c \
	  ./flags/flag_char.c \
	  ./flags/flag_err.c \
	  ./flags/flag_hex.c \
	  ./flags/flag_int.c \
	  ./flags/flag_mod.c \
	  ./flags/flag_oct.c \
	  ./flags/flag_oct_s.c \
	  ./flags/flag_sig.c \
	  ./flags/flag_str.c \
	  ./flags/flag_uint.c \
	  ./my_printf.c \
	  ./usual_fn/basic_fn.c \
	  ./usual_fn/dec_to_bas.c \
	  ./usual_fn/my_putstr_oct.c \
	  ./flags/flag_hash.c \
	  ./flags/flag_hash_bas.c \
	  ./usual_fn/dec_bas.c \
	  ./usual_fn/my_putfloat.c \
	  ./flags/flag_float.c \
	  ./flags/flag_ptr.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	 ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

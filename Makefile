NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_printf_outils.c ft_printf_outils2.c

OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all  fclean re clean

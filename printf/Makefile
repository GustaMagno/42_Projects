NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f


SRCS = ft_printf.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean: 
	$(RM) $(OBJS) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) -rf bonus

re: fclean all


.PHONY: all clean fclean re
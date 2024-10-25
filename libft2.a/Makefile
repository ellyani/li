NAME = libft.a
SRC = 
OBJ = $(SRC : %.c = %.o)
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = gcc
HEADER = libft.HEADER

all : $(NAME)

$(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)
%.o:%.c $(HEADER)
	@$(CC) $(CFLAGS) -o $@ -c $<

clean :
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean $(NAME)
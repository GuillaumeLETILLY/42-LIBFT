NAME	:= libft.a
CFLAGS	:= -Wall -Werror -Wextra

SRC	:=	ft_isalpha.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_strchr.c \
		ft_isascii.c \
		ft_strrchr.c \
		ft_isprint.c \
		ft_strncmp.c \
		ft_strlen.c \
		ft_memchr.c \
		ft_memset.c \
		ft_memcmp.c \
		ft_bzero.c \
		ft_strnstr.c \
		ft_memcpy.c \
		main.c \

OBJ	:= $(SRC:.c=.o)

ARFLAGS	:= rcs
RM	:= rm -f

%.o:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

all:	$(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re

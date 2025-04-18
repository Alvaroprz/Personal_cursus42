NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
ft_itoa.c ft_strmapi.c ft_striteri.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

OBJS = $(SRCS:.c=.o)

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
ft_lstadd_back_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
ft_lstiter_bonus.c ft_lstmap_bonus.c \

BONUS_OBJS = $(BONUS:.c=.o)

MAIN_SRC = main.c
EXEC = main

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created successfully!"

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(EXEC): $(NAME) $(MAIN_SRC)
	$(CC) $(CFLAGS) $(MAIN_SRC) $(NAME) -o $(EXEC)
	@echo "Executable $(EXEC) created successfully!"

bonus: $(NAME) $(BONUS_OBJS)
	$(AR) rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "Bonus compiled and added to $(NAME)"

clean:
	@rm -f $(OBJS) $(BONUS_OBJS) 

fclean: clean
	@rm -f $(NAME) $(EXEC)

re: fclean all

.PHONY: bonus clean fclean re
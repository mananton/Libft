# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mananton <telesmanuel@hotmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 13:22:44 by mananton          #+#    #+#              #
#    Updated: 2024/11/13 11:23:55 by mananton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = @cc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRC = \
      ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c \
      ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_memchr.c \
      ft_memset.c ft_putstr_fd.c ft_striteri.c ft_strlen.c ft_strrchr.c ft_toupper.c \
      ft_calloc.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c \
      ft_strmapi.c ft_strtrim.c ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c \
      ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c
BONUS = \
	ft_lstadd_back.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstsize.c \
	ft_lstadd_front.c ft_lstdelone.c ft_lstlast.c ft_lstnew.c
OFILES = $(SRC:.c=.o)
BONUS_OFILES = $(BONUS:.c=.o)
HAS_BONUS = no

all: $(NAME)

$(NAME): $(OFILES)
	@ar rcs $(NAME) $(OFILES)
	@ranlib $(NAME)

bonus: HAS_BONUS = yes

bonus: $(OFILES) $(BONUS_OFILES)
	@ar rcs $(NAME) $(OFILES) $(BONUS_OFILES)
	@ranlib $(NAME)
	@touch bonus

%.o:%.c $
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OFILES) $(BONUS_OFILES) bonus

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

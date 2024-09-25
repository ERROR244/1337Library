# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: error01 <error01@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 14:29:42 by ksohail-          #+#    #+#              #
#    Updated: 2024/03/11 17:45:14 by error01          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the library
NAME1 = MyLib.a
NAME2 = Unit-Test


# Source files
SRC =	libft/ft_atoi.c libft/ft_bzero.c libft/ft_calloc.c libft/ft_isalnum.c \
     	libft/ft_isalpha.c libft/ft_isascii.c libft/ft_isdigit.c libft/ft_isprint.c \
     	libft/ft_itoa.c libft/ft_lstadd_back_bonus.c libft/ft_lstadd_front_bonus.c \
     	libft/ft_lstclear_bonus.c libft/ft_lstdelone_bonus.c libft/ft_lstiter_bonus.c \
     	libft/ft_lstlast_bonus.c libft/ft_lstmap_bonus.c libft/ft_lstnew_bonus.c \
     	libft/ft_lstsize_bonus.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c \
     	libft/ft_memmove.c libft/ft_memset.c libft/ft_putchar_fd.c libft/ft_putendl_fd.c \
     	libft/ft_putnbr_fd.c libft/ft_putstr_fd.c libft/ft_split.c libft/ft_strchr.c \
     	libft/ft_strdup.c libft/ft_striteri.c libft/ft_strjoin.c libft/ft_strlcat.c \
     	libft/ft_strlcpy.c libft/ft_strlen.c libft/ft_strmapi.c libft/ft_strncmp.c \
     	libft/ft_strnstr.c libft/ft_strrchr.c libft/ft_strtrim.c libft/ft_substr.c \
     	libft/ft_tolower.c libft/ft_toupper.c\
		printf/ft_printf.c\
		printf/print_ch.c\
		printf/print_i_d.c\
		printf/print_p.c\
		printf/print_str.c\
		printf/print_u.c\
		printf/print_x.c\
		garbage-collection/GC.c\
		GNL/get_next_line.c\
		GNL/get_next_line_utils.c\

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I./include #-fsanitize=address -g3

# Object files
OBJ = $(SRC:.c=.o)

# Default target
all: $(NAME1)

# Rule to create the static library
$(NAME1): $(OBJ)
	@printf "\033[38;2;136;23;152;1;3m$SEP\n\n"
	@echo "                ████╗ ███████╗ ███████╗ ███████╗   ╔███╔█       █╗███   ╔██╗      ╔██╗   ███╗     ███╗███████╗        ██████╗"
	@echo "             ███████║      ██║      ██║ ╚════██║   ║███║██     ██║███   ║██║      ║██║   ███║     ███║███╔══██╗      ██╔══██╗"
	@echo "             ╚════██║ ███████║ ███████║     ██╔╝   ║███ ╚╗█   █╔╝ ███     ╚╗██==██╔╝     ███║     ███║███████╔╝     ████████║"
	@echo "                  ██║      ██║      ██║    ██╔╝    ║███   ╚╗█╔╝   ███       ╚╗██╔╝       ███║     ███║███╔══██╗     ██╔═══██║"
	@echo "                  ██║ ███████║ ███████║    ██║     ║███           ███        ║██║        ████████╗███║███████╔╝     ██║   ██║"
	@echo "                  ╚═╝ ╚══════╝ ╚══════╝    ╚═╝     ║███           ███        ║██║        ╚═══════╝╚══╝╚══════╝  ██  ╚═╝   ╚═╝"
	@printf "\033[0;32m\n\ncompling\033[0;37m"
	@for i in 1 2 3; do \
	    sleep 0.1; \
	    printf "."; \
		done
	@printf "\n\033[0;32mBuilding MyLib"
	@for i in 1 2 3; do \
	    sleep 0.1; \
	    printf "."; \
		done
	@printf "\033[0;37m\n"
	@ar rcs $(NAME1) $(OBJ)
	@printf "\033[0;32mMyLib.a has been created!\033[0m\n"

Unit-Test: ${NAME2}


${NAME2}: all
	@cc $(CFLAGS) main.c MyLib.a -o ${NAME2}

# Rule to compile .c files into .o files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	@rm -f $(OBJ)
	@printf "\033[0;31mObject files cleaned.\033[0m\n"

# Clean object files and library
fclean: clean
	@rm -f $(NAME1)
	@rm -f $(NAME2)
	@printf "\033[0;31m$(NAME1) cleaned.\033[0m\n"

# Rebuild everything
re: fclean all

# Extra commands
test: fclean Unit-Test

# Mark secondary files as unnecessary
.SECONDARY: $(OBJ)
# Mark phony targets
.PHONY: all clean fclean re run_script

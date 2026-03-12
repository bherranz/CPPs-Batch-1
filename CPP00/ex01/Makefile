# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/05 19:51:16 by codespace         #+#    #+#              #
#    Updated: 2026/02/07 14:01:37 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = my_phonebook

SRCS    = main.cpp PhoneBook.cpp Contact.cpp

# Define Colors
GREEN   := \033[1;32m  # Bold Green
YELLOW  := \033[0;33m  # Non-bold Yellow
RED     := \033[0;31m  # Regular Red
BLUE    := \033[1;34m  # Bold Blue
PURPLE  := \033[1;35m  # Bold Purple
BOLD    := \033[1m     # Bold Text
NC      := \033[0m     # No Color

OBJS    = ${SRCS:.cpp=.o}

# Compiler and Flags
CC      = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98

REMOVE  = rm -f

# Compilation
%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(BOLD)$(PURPLE)📒 My Awesome PhoneBook is ready! Objects compiled!$(NC)"

clean:
	@$(REMOVE) $(OBJS)
	@echo "$(BOLD)$(BLUE)🧹 Objects cleaned...$(NC)"

fclean: clean
	@$(REMOVE) $(NAME)
	@echo "$(BOLD)$(GREEN)✨ Everything cleaned up!$(NC)"

re: fclean all

clear:
	@clear

.PHONY: all clean fclean re clear

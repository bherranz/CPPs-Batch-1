# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/07 14:22:55 by codespace         #+#    #+#              #
#    Updated: 2026/02/10 09:52:46 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = complain

SRCS    = main.cpp Harl.cpp

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
	@echo "$(BOLD)$(BLUE)📢 Objects compiled!$(NC)"

clean:
	@$(REMOVE) $(OBJS)
	@echo "$(BOLD)$(YELLOW)🧹 Objects cleaned...$(NC)"

fclean: clean
	@$(REMOVE) $(NAME)
	@echo "$(BOLD)$(GREEN)✨ Everything cleaned up!$(NC)"

re: fclean all

clear:
	@clear

.PHONY: all clean fclean re clear

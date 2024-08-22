# Colors
GREEN=\033[0;32m
YELLOW=\033[0;33m
NC=\033[0m

# Target and Compiler Settings
NAME        := harl
CC          := c++
FLAGS      := -Wextra -Wall -Werror -std=c++98
# Source Files
SRC        := main.cpp Harl.cpp
OBJ        := $(SRC:.cpp=.o)

# Targets
all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $@
	@echo "${GREEN}Compilation completed.${NC}"

%.o: %.cpp
	@echo "${YELLOW}Compiling $<.${NC}"
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "${YELLOW}Cleaning objects.${NC}"

fclean: clean
	@rm -f $(NAME)
	@echo "${YELLOW}Cleaning executables.${NC}"

re: fclean all

.PHONY: all clean fclean re

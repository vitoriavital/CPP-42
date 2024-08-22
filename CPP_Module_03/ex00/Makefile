# Colors
GREEN=\033[0;32m
YELLOW=\033[0;33m
NC=\033[0m

# Target and Compiler Settings
NAME        := clapTrap
CC          := c++
FLAGS      := -Wextra -Wall -Werror -std=c++98
# Directories
SRCS_DIR    := srcs
OBJS_DIR    := objs
# Source Files and Object Files
SRC         := $(wildcard $(SRCS_DIR)/*.cpp)
OBJ         := $(SRC:$(SRCS_DIR)/%.cpp=$(OBJS_DIR)/%.o)

# Targets
all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $@
	@echo "${GREEN}Compilation completed.${NC}"

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "${YELLOW}Compiling $<.${NC}"
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)
	@echo "${YELLOW}Cleaning objects.${NC}"

fclean: clean
	@rm -f $(NAME)
	@echo "${YELLOW}Cleaning executables.${NC}"

re: fclean all

.PHONY: all clean fclean re

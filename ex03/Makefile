CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++17
VAL = valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes
SRC = main.cpp src/Bureaucrat.cpp \
        src/AForm.cpp src/ShrubberyCreationForm.cpp \
        src/RobotomyRequestForm.cpp src/PresidentialPardonForm.cpp \
        src/Intern.cpp
OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

NAME = ex03

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)
	@echo "\033[32m Program is ready to execute\033[0m"

$(OBJ_DIR)/%.o: %.cpp
	@mkdir	-p	$(dir $@)
	@$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "\033[31mObject files removed\033[0m"

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(OBJ_DIR)
	@echo "\033[31mProgram removed\033[0m"

re: fclean all

valgrind: $(NAME)
	$(VAL) ./$(NAME)

.PHONY: all clean fclean re valgrind
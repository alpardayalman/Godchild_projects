NAME = executable
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NONEED = test2.cpp test.cpp
SRC = $(filter-out $(NONEED), $(wildcard *.cpp))
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@make clean
		@echo "\033[92mProgram finished.\033[0m"

$(OBJ) :
		@$(CC) $(CFLAGS) $(SRC) -c

clean :
		@rm $(OBJ)

fclean : clean
		@rm -rf $(NAME)

run : all
	@./executable

re : fclean all

COLOUR_GREEN = \033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_END = \033[0m

CC = c++ -Wall -Wextra -Werror -std=c++98
RM = rm -rf

NAME = PmergeMe
SRCS =	main.cpp PmergeMe.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		@$(CC) $(OBJS) -o $(NAME)
		@echo "$(COLOUR_GREEN)CPP09 | EX02 compilation succesfull!$(COLOUR_END)"

run: all
	./$(NAME) 1 2 3 

test: all
	./$(NAME) 3 2 6 8 4 1 23 12

clean :
	@$(RM) $(OBJS)

fclean : clean
		@$(RM) $(NAME)
		@echo "$(COLOUR_RED)FCLEAN succesfull!$(COLOUR_END)"

re: fclean all

.PHONY: all clean fclean re

COLOUR_GREEN = \033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_END = \033[0m

CC = c++ -Wall -Wextra -Werror -std=c++98
RM = rm -rf

NAME = BitcoinExchange
SRCS =	main.cpp BitcoinExchange.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		@$(CC) $(OBJS) -o $(NAME)
		@echo "$(COLOUR_GREEN)CPP09 | EX00 compilation succesfull!$(COLOUR_END)"

clean :
	@$(RM) $(OBJS)

fclean : clean
		@$(RM) $(NAME)
		@echo "$(COLOUR_RED)FCLEAN succesfull!$(COLOUR_END)"

re: fclean all

.PHONY: all clean fclean re

COLOUR_GREEN = \033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_END = \033[0m

CC = c++ -Wall -Wextra -Werror -std=c++98
RM = rm -rf

NAME = Account
SRCS =	src/Account.cpp \
		src/tests.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(SRCS)
		@$(CC) $(SRCS) -o $(NAME)
		@echo "$(COLOUR_GREEN)EX02 compilation succesfull!$(COLOUR_END)"

clean :
	@$(RM) $(OBJS)

fclean : clean
		@$(RM) $(NAME)
		@echo "$(COLOUR_RED)FCLEAN succesfull!$(COLOUR_END)"

re: fclean all

.PHONY: all clean fclean re
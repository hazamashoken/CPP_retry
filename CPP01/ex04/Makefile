CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME =  sed_for_loser
SRCS = main.cpp Sed.cpp
OBJS = $(SRCS:.cpp=.o)
CXX = c++

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

PHONY: all clean fclean re
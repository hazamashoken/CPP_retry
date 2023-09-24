CXXFLAGS = -Wall -Wextra -Werror
NAME =  HITHISISBRAIN
SRCS = main.cpp
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
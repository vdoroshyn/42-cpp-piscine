NAME = whatever
CC = clang++
CPPFLAGS = -Wall -Wextra -Werror

OBJECTS = whatever.o \

.PHONY : clean all fclean re

all : $(NAME)
	
$(NAME) : $(OBJECTS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJECTS)

clean :
	rm -rf $(OBJECTS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

whatever.o : whatever.cpp
	$(CC) $(CPPFLAGS) -c whatever.cpp

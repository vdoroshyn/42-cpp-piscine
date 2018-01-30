NAME = iter
CC = clang++
CPPFLAGS = -Wall -Wextra -Werror

OBJECTS = iter.o \

.PHONY : clean all fclean re

all : $(NAME)
	
$(NAME) : $(OBJECTS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJECTS)

clean :
	rm -rf $(OBJECTS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

iter.o : iter.cpp
	$(CC) $(CPPFLAGS) -c iter.cpp

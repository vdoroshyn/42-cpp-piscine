NAME = megaphone
CC = clang++
CPPFLAGS = -Wall -Wextra -Werror

OBJECTS = megaphone.o \

.PHONY : clean all fclean re

all : $(NAME)
	
$(NAME) : $(OBJECTS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJECTS)

clean :
	rm -rf $(OBJECTS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

megaphone.o : megaphone.cpp
	$(CC) $(CPPFLAGS) -c megaphone.cpp

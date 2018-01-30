NAME = phonebook
CC = clang++
CPPFLAGS = -Wall -Wextra -Werror

OBJECTS = main.o \
			Phonebook.class.o \
			Contact.class.o \

.PHONY : clean all fclean re

all : $(NAME)
	
$(NAME) : $(OBJECTS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJECTS)

clean :
	rm -rf $(OBJECTS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

main.o : main.cpp
	$(CC) $(CPPFLAGS) -c main.cpp

Phonebook.class.o : Phonebook.class.cpp
	$(CC) $(CPPFLAGS) -c Phonebook.class.cpp Phonebook.class.hpp

Contact.clEass.o : Contact.class.cpp
	$(CC) $(CPPFLAGS) -c Contact.class.cpp Contact.class.hpp

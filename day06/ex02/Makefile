NAME = real_type
CC = clang++
CPPFLAGS = -Wall -Wextra -Werror

OBJECTS = main.o \
			Base.o \
			A.o \
			B.o \
			C.o \

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

Base.o : Base.cpp
	$(CC) $(CPPFLAGS) -c Base.cpp

A.o : A.cpp
	$(CC) $(CPPFLAGS) -c A.cpp

B.o : B.cpp
	$(CC) $(CPPFLAGS) -c B.cpp

C.o : C.cpp
	$(CC) $(CPPFLAGS) -c C.cpp

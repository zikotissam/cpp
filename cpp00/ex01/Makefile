CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook
obj = PhoneBook.o
SRC = PhoneBook.cpp

all	  : ${NAME}

${NAME}: ${obj}
	${CC} ${CFLAGS} ${obj}  -o ${NAME}
clean :
	@rm -fr ${obj}

fclean : clean
	@rm -fr ${NAME}

re : fclean all
.SECONDARY : ${obj}
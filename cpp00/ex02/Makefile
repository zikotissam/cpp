CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Account
obj = Account.o tests.o
SRC = Account.cpp test.cpp

all	  : ${NAME}

${NAME}: ${obj}
	${CC} ${CFLAGS} ${obj}  -o ${NAME}
clean :
	@rm -fr ${obj}

fclean : clean
	@rm -fr ${NAME}

re : fclean all
.SECONDARY : ${obj}
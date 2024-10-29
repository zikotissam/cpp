CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = brain
obj = main.o
SRC = main.cpp

all	  : ${NAME}

${NAME}: ${obj}
	${CC} ${CFLAGS} ${obj}  -o ${NAME}
clean :
	@rm -fr ${obj}

fclean : clean
	@rm -fr ${NAME}

re : fclean all
.SECONDARY : ${obj}
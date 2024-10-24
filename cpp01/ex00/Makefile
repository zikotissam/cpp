CC = c++
CFLAGS = -Wall -Wextra -Werror
NAME = Zombie
SRC =  randomChump.cpp newZombie.cpp Zombie.cpp main.cpp
obj = ${SRC:.cpp=.o}

all	  : ${NAME}

${NAME}: ${obj}
	${CC} ${CFLAGS} ${obj}  -o ${NAME}

%.o : %.cpp
	${CC} ${CFLAGS} -c $< -o $@
	
clean :
	@rm -fr ${obj}


fclean : clean
	@rm -fr ${NAME}

re : fclean all
.SECONDARY : ${obj}
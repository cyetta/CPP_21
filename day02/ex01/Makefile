NAME	= fixed
SRCS	= main.cpp Fixed.cpp

OBJS	=	${SRCS:%.cpp=%.o}

CC		=	c++

RM		=	rm -f

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY:		all clean fclean re debug

DPDS	= ${SRCS:.cpp=.d}

all:		${NAME}

%.o: %.cpp
			${CC} ${CPPFLAGS} ${DFLAG} -MMD -c $< -o $@

include ${wildcard ${DPDS}}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${DFLAG} -o ${NAME} ${OBJS}
			${RM} ${DPDS}

debug:
			${MAKE} DFLAG="-g3" ${NAME}
clean:
			${RM} ${OBJS} ${DPDS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

test:
			./${NAME}
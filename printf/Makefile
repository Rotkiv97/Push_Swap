NAME := printf
CC := gcc
FLAGS := -Wall -Wextra -Werror 

SRCS := ft_lettura.c \
			ft_gest_ft.c \
			ft_gest_ft3.c \
			ft_ricercha_arg.c \
			ft_gest_ft2.c \
			ft_printf.c \
			ft_p.c \
                          
OBJS:= $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} ${FLAGS} -o ${NAME} ${OBJS}

RM := rm -f

all: ${NAME}

bonus: all

clean:
	@ ${RM} *.o */*.o */*/*.o

fclean:	clean
	@ ${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re



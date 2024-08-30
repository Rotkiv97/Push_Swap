
NAME := push_swap
NAME_B := push_swap_bonus
CC := gcc
FLAGS := -Wall -Wextra -Werror

SRCS  := ft_utils_3.c \
            printf/ft_lettura.c \
            printf/ft_gest_ft.c \
            printf/ft_gest_ft3.c \
            printf/ft_ricercha_arg.c \
            printf/ft_gest_ft2.c \
            printf/ft_printf.c \
            printf/ft_p.c \
            ft_gest_arg_1.c \
            ft_rotate.c \
            ft_gest_arg_2.c \
            ft_push.c \
            main.c \
            ft_utils.c \
            ft_piccola_smistata.c \
            ft_gest_arg_02.c \
            ft_swap.c \
            ft_reverse_rotate.c \
            ft_spostamento_stack.c \
            ft_ottieni_pos_obbiettivo.c \
            ft_grandezza_stack.c \
            ft_gest_stack.c \
            ft_utils_2.c \
            ft_gest_arg.c \
            ft_spostamento_stack_tranne_tre.c \
            ft_smistata_quatro.c \
            ft_smistata_cinque.c \
            ft_smistata_100.c \
            ft_smistata_100_2.c \
            ft_smistata_100_1.c \
            ft_smistata_100_3.c \
            ft_smistata_100_4.c \
            ft_tab.c \

SRCSBONUS := bonus/get_next_line/get_next_line.c \
                  bonus/get_next_line/get_next_line_utils.c \
                  bonus/checker.c \
                  ft_utils_3.c \
                  printf/ft_lettura.c \
                  printf/ft_gest_ft.c \
                  printf/ft_gest_ft3.c \
                  printf/ft_ricercha_arg.c \
                  printf/ft_gest_ft2.c \
                  printf/ft_printf.c \
                  printf/ft_p.c \
                  ft_gest_arg_1.c \
                  ft_rotate.c \
                  ft_gest_arg_2.c \
                  ft_push.c \
                  ft_utils.c \
                  ft_piccola_smistata.c \
                  ft_gest_arg_02.c \
                  ft_swap.c \
                  ft_reverse_rotate.c \
                  ft_spostamento_stack.c \
                  ft_ottieni_pos_obbiettivo.c \
                  ft_grandezza_stack.c \
                  ft_gest_stack.c \
                  ft_utils_2.c \
                  ft_gest_arg.c \
                  ft_spostamento_stack_tranne_tre.c \
                  ft_smistata_quatro.c \
                  ft_smistata_cinque.c \
                  ft_smistata_100.c \
                  ft_smistata_100_2.c \
                  ft_smistata_100_1.c \
                  ft_smistata_100_3.c \
                  ft_smistata_100_4.c \
                  ft_tab.c \
                  bonus/ft_chaker_1.c \
                  bonus/ft_chaker_2.c \
                  bonus/ft_checker_3.c \
                  bonus/ft_checker_4.c \
                       	
OBJS := $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -g -c $< -o ${<:.c=.o}
RM := rm -f

${NAME}: ${OBJS}
	${CC} ${FLAGS} -o ${NAME} ${OBJS}

all: ${NAME}

bonus: all
	$(CC) $(FLAGS)  ${SRCSBONUS} -o ${NAME_B}
clean:
	@ ${RM} *.o */*.o */*/*.o

fclean:	clean
	@ ${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re



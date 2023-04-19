NAME 		= libftprintf.a

SRCS 		= 	ft_printf.c ft_printfchar.c ft_printfhexa.c	\
				ft_printfnbr.c ft_printfpercent.c			\
				ft_printfptr.c ft_printfstr.c				\
				ft_printfunsigned.c ft_itoa.c ft_strlen.c	\
				ft_calloc.c ft_bzero.c ft_putchar.c

HDR 		= ft_printf.h

OBJS 		= ${SRCS:%.c=%.o}

CC 			= cc

RM 			= rm -f

CFLAGS 		= -Wall -Wextra -Werror

%.o: %.c ${HDR}
	${CC} ${CFLAGS} -c $< -o $@ 

all:		${NAME}

$(NAME):	${OBJS}
			ar rc ${NAME} ${OBJS} 
			ranlib ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re .c.o
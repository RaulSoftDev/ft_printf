NAME = libftprintf.a
LNAME = libft.a
SOURCE = ft_printf.c ft_putchar_pf.c ft_putstr_pf.c ft_puthex_pf.c \
		ft_putnbr_pf.c ft_putunbr_pf.c ft_putvoid_pf.c ft_freear.c \
		ft_vargscount.c ft_checkformat.c
GCC = gcc
FLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${SOURCE}
	@cd libft && make -s all
	@echo "Libft library created!"
	@${GCC} ${FLAGS} -c ${SOURCE} -L./libft -l:libft.a
	@echo "Libftprintf files compiled!"
	@ar -rcs ${NAME} libft/*.o *.o
	@echo "Libftprintf library created successfully!"

%.o: %.c
	${GCC} ${FLAGS} -c $^
	
clean:
	@rm -f *.o
	@cd libft && rm -f *.o
	@echo "Output files deleted!"

fclean: clean
	@cd libft && rm -f ${LNAME}
	@rm -f ${NAME}
	@echo "Libraries deleted!"

re: fclean all

.PHONY: all clean fclean re

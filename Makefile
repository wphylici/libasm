NAME = libasm.a

SRCS := ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

NASM := nasm

FLAGS_NASM := -f macho64

OBJ_SRCS := $(SRCS:.s=.o)

%.o: %.s
	@$(NASM) $(FLAGS_NASM) $<

all: $(NAME)

$(NAME): $(OBJ_SRCS)
	@ar rc $(NAME) $(OBJ_SRCS)

test:
	@gcc main.c -L. -lasm && ./a.out

clean:
	@rm -f $(OBJ_SRCS)

fclean: clean
	@rm -f $(NAME)
	@rm a.out && rm my_test.txt && rm std_test.txt

re: fclean all

.PHONY: all clean fclean re

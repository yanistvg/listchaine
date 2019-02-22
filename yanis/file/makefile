SRC = 	srcs/main.c\
	srcs/creatCase.c\
	srcs/quit.c\
	srcs/showFile.c

OBJ =	main.o\
	creatCase.o\
	quit.o\
	showFile.o

NAME = file

file:
	gcc -c $(SRC)
	gcc -o $(NAME) $(OBJ)
	./$(NAME)

clean:
	rm -rf $(NAME) $(OBJ)

re: clean file

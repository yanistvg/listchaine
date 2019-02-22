SRC = 	srcs/main.c\
	srcs/creatCase.c\
	srcs/quit.c\
	srcs/showFile.c\
	srcs/addCase.c\
	srcs/deletCase.c

OBJ =	main.o\
	creatCase.o\
	quit.o\
	showFile.o\
	addCase.o\
	deletCase.o

NAME = file

file:
	gcc -c $(SRC)
	gcc -o $(NAME) $(OBJ)
	./$(NAME)

clean:
	rm -rf $(NAME) $(OBJ)

re: clean file

NAME=fifo

SRC=	srcs/main.c\
	srcs/creerListe.c\
	srcs/addCase.c\
	srcs/showCase.c\
	srcs/deletCase.c\
	srcs/quit.c\
	srcs/addCaseAfter.c

OBJ=	main.o\
	creerListe.o\
	addCase.o\
	showCase.o\
	deletCase.o\
	quit.o\
	addCaseAfter.o

file:
	gcc -c $(SRC)
	gcc -o $(NAME) $(OBJ)
	./$(NAME)

clean:
	rm -rf $(OBJ) $(NAME)

re: clean file

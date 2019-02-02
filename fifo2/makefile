NAME=fifo

SRC=	srcs/main.c\
	srcs/creerListe.c

OBJ=	main.o\
	creerListe.o

file:
	gcc -c $(SRC)
	gcc -o $(NAME) $(OBJ)
	./$(NAME)

clean:
	rm -rf $(OBJ) $(NAME)

re: clean file

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct Chaine
{
  int val;
  struct Chaine *suivant;
} chaine_t;

chaine_t *creerListe();

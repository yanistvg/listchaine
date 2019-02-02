#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct Chaine
{
  int val;
  struct Chaine *suivant;
} chaine_t;

void creerListe(chaine_t *liste);

#include "include.h"

chaine_t *addCaseBefore(chaine_t *liste, int i, int e)
{
  chaine_t *buffer;
  chaine_t *new;
  chaine_t *precedent;
  int y=2;
  buffer = liste;
  precedent = liste;
  buffer = buffer->suivant;
  while (y++ != i && buffer->suivant != NULL && i!=1)
  {
    buffer = buffer->suivant;
    precedent = precedent->suivant;
  }
  y--;
  if (y==i && i!=1)
  {
    new = malloc(sizeof(chaine_t));
    new->val = e;
    new->suivant = buffer;
    precedent->suivant = new;
    return liste;
  }
  if (i==1)
  {
    new = malloc(sizeof(chaine_t));
    new->val = e;
    new->suivant = liste;
    liste = new;
    return liste;
  }
  printf("la case choisi n'existe pas\n");
  return liste;
}

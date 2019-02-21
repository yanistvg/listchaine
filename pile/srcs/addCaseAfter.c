#include "include.h"

chaine_t *addCaseAfter(chaine_t *liste, int i, int e)
{
  chaine_t *buffer;
  chaine_t *new;
  int y=1;
  buffer = liste;
  while (y++ != i && buffer->suivant != NULL && i!=0)
    buffer = buffer->suivant;
  y--;
  if (y == i && buffer->suivant == NULL)
  {
    new = malloc(sizeof(chaine_t));
    new->val = e;
    new->suivant = NULL;
    buffer->suivant = new;
    return liste;
  }
  if (y == i && buffer->suivant != NULL && i!=0)
  {
    new = malloc(sizeof(chaine_t));
    new->val = e;
    new->suivant = buffer->suivant;
    buffer->suivant = new;
    return liste;
  }
  if (i == 0)
  {
    new = malloc(sizeof(chaine_t));
    new->val = e;
    new->suivant = liste;
    liste = new;
    return liste;
  }
  printf("erreur la case n'existe pas\n");
  return liste;
}

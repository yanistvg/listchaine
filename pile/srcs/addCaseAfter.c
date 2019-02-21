#include "include.h"

chaine_t *addCaseAfter(chaine_t *liste, int i, int e)
{
  chaine_t *buffer;
  chaine_t *precedent;
  chaine_t *new;
  buffer = liste;
  int y=1;
  buffer = buffer->suivant;
  while (y++ != i && buffer->suivant != NULL && i!=1)
  {
    precedent = precedent->suivant;
    buffer = buffer->suivant;
  }
  if (y == i && buffer->suivant == NULL)
  {
    new = malloc(sizeof(chaine_t));
    new->val = e;
    new->suivant = buffer;
    buffer->suivant = NULL;
    return liste;
  }
  if (y == i && buffer->suivant != NULL && i!=1)
  {
    new = malloc(sizeof(chaine_t));
    new->val = e;
    new->suivant = buffer;
    precedent->suivant = new;
    return liste;
  }
  if (i == 1)
  {
    new = malloc(sizeof(chaine_t));
    new->val = e;
    new->suivant = liste;
    liste = new;
  }
  return liste;
}  // changer le code pour que se soit apres la case choisi

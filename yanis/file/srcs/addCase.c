#include "include.h"

chaine_t *addCase(chaine_t *liste, int  i)
{
  chaine_t *buffer;
  chaine_t *new;
  buffer = liste;
  while (buffer->suivant != NULL)
    buffer = buffer->suivant;
  new = malloc(sizeof(chaine_t));
  new->val = i;
  new->suivant = NULL;
  buffer->suivant = new;
  return liste;
}

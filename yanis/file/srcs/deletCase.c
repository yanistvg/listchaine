#include "include.h"

chaine_t *deletCase(chaine_t *liste, int i)
{
  chaine_t *buffer;
  chaine_t *precedent;
  int e=1;
  precedent = buffer = liste;
  buffer = buffer->suivant;
  while (++e != i && buffer->suivant!=NULL)
  {
    buffer = buffer->suivant;
    precedent = precedent->suivant;
  }
  if (e==i && buffer->suivant == NULL && i != 1)
  {
    precedent->suivant = NULL;
    free(buffer);
    return liste;
  }
  if (e==i && buffer->suivant != NULL && i!= 1)
  {
    precedent->suivant = buffer->suivant;
    free(buffer);
    return liste;
  }
  if (i == 1)
  {
    buffer = liste;
    liste = liste->suivant;
    free(buffer);
  }
  return liste;
}

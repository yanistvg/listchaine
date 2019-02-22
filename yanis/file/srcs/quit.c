#include "include.h"

void quit(chaine_t *liste)
{
  chaine_t *buffer;
  while (liste->suivant != NULL)
  {
    buffer = liste;
    liste = liste->suivant;
    free(buffer);
  }
  free(liste);
}

#include "include.h"

void quit(chaine_t *liste)
{
  chaine_t *buffer;
  buffer = liste;
  while (liste->suivant != NULL)
  {
    liste = liste->suivant;
    free(buffer);
    buffer = liste;
  }
  free(liste);
}

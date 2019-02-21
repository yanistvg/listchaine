#include "include.h"

chaine_t *deletCase(chaine_t *liste, int caseDelet)
{
  chaine_t *buffer;
  chaine_t *precedent;
  int i=1;
  buffer = liste;
  if (caseDelet <= 0)
  {
    printf("les cases negative n'existe pas\n");
    return liste;
  }
  if (caseDelet == 1)
  {
    if (buffer->suivant != NULL)
    {
      buffer = buffer->suivant;
      free(liste);
      return buffer;
    }
    free(buffer);
    return NULL;
  }
  precedent = liste;
  buffer = buffer->suivant;
  while (++i != caseDelet && buffer->suivant != NULL)
  {
    buffer = buffer->suivant;
    precedent = precedent->suivant;
  }
  if (i!=caseDelet)
  {
    printf("cette case n'existe pas\n");
    return liste;
  }
  precedent->suivant = buffer->suivant;
  free(buffer);
  return liste;
}

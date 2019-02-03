#include "include.h"

void creerListe(chaine_t *liste)
{
  chaine_t *chaine = malloc(sizeof(*chaine));

  if(chaine == NULL)
  {
    exit(EXIT_FAILURE);
  }

  chaine->val = 0;
  chaine->suivant = NULL;
}

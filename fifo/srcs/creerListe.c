#include "include.h"

chaine_t *creerListe()
{
  chaine_t *liste = malloc(sizeof(chaine_t));
  liste->val = 10;
  liste->suivant = NULL;
  return liste;
}

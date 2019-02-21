#include "include.h"

chaine_t *creerListe(int i)
{
  chaine_t *liste = malloc(sizeof(chaine_t));
  
  liste->val = i;
  liste->suivant = NULL;
  return liste;
}

#include "include.h"

chaine_t *addCase(chaine_t *liste, int val)
{
  chaine_t *new;
  new = malloc(sizeof(chaine_t));
  new->val = val;
  new->suivant = liste;
  return new;
}

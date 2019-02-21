#include "include.h"

void modifyCase(chaine_t *liste, int i, int e)
{
  int y=1;
  while (i != y++ && liste->suivant != NULL)
    liste = liste->suivant;
  y--;
  printf("\n\ty = %d\n", y);
  if (i==y)
    liste->val = e;
}

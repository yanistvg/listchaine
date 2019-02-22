#include "include.h"

void showCase(chaine_t *liste)
{
  chaine_t *show;
  while(liste->suivant != NULL)
  {
    printf("%d | ", liste->val);
    liste = liste->suivant;
  }
  printf("%d\n", liste->val);
}

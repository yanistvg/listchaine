#include "include.h"

void showFile(chaine_t *liste)
{
  while (liste->suivant != NULL)
  {
    printf("%d | ", liste->val);
    liste = liste->suivant;
  }
  printf("%d\n", liste->val);
}

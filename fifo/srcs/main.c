#include "include.h"

int main(void)
{
  chaine_t *liste;
  liste = creerListe();
  printf("%d\n", liste->val);
  return 0;
}

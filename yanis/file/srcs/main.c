#include "include.h"

int main(void)
{
  chaine_t *liste;
  int i;
  printf("Combient de case : ");
  scanf("%d", &i);
  liste = creatCase(i);
  showFile(liste);
  quit(liste);
}

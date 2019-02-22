#include "include.h"

int main(void)
{
  chaine_t *liste;
  int i, y=0;
  printf("Combient de case : ");
  scanf("%d", &i);
  liste = creatCase(i);
  showFile(liste);
  while (y != 6)
  {
    printf("\n0-show case\n");
    printf("1-add case\n");
    printf("2-delet case\n");
    printf("3-add case after\n");
    printf("4-add case before\n");
    printf("5-modify case\n");
    printf("6-quit\n\n> ");
    scanf("%d", &y);
    switch (y)
    {
      case 0:
        showFile(liste); break;
      case 1:
        printf("valeur de la nouvellle case : ");
        scanf("%d", &i);
        liste = addCase(liste, i); break;
      case 2:
        printf("quelle case voulez vous suprimer : ");
        scanf("%d", &i);
        liste = deletCase(liste, i);
      default : break;
    }
  }
  quit(liste);
}

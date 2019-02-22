#include "include.h"

int main(void)
{
  chaine_t *liste;
  int i=0, e=0, y=2;
  while (i <= 1)
  {
    printf("combient de case dans la liste : ");
    scanf("%d", &i);
    if (i<0)
      printf("le nombre doit etre superieur a 0\n");
    if (i==0)
      printf("il faut un minimum 1 case\n");
  }
  printf("valeur dans la case 1 : ");
  scanf("%d", &e);
  liste = creerListe(e);
  while (i-- > 1)
  {
    printf("valeur dans la case %d : ", y);
    scanf("%d", &e);
    liste = addCase(liste, e);
    y++;
  }
  showCase(liste);
  i=0;
  while (i!=6)
  {
    printf("\n0-show case\n");
    printf("1-add new Case\n");
    printf("2-delet case\n");
    printf("3-add new case after\n");
    printf("4-add new case before\n");
    printf("5-modify value case\n");
    printf("6-quit\n");
    printf("\n> ");
    scanf("%d", &i);
    switch (i)
    {
      case 0:
        showCase(liste); break;
      case 1:
        printf("\nvaleur de la nouvelle case : ");
        scanf("%d", &e);
        liste = addCase(liste, e); break;
      case 2:
        printf("\nquelle case voulez-vous suprimer : ");
        scanf("%d", &e);
        liste = deletCase(liste, e);
        break;
      case 3:
        printf("\napres quelle case : ");
        scanf("%d", &e);
        printf("valeur de la nouvelle case : ");
        scanf("%d", &y);
        liste = addCaseAfter(liste, e, y);
        break;
      case 4:
        printf("\navant quelle case : ");
        scanf("%d", &e);
        printf("valeur de la nouvelle case : ");
        scanf("%d", &y);
        liste = addCaseBefore(liste, e, y);
        break;
      case 5:
        printf("\nquelle case a modify : ");
        scanf("%d", &e);
        printf("quelle est la nouvelle valeur : ");
        scanf("%d", &y);
        modifyCase(liste, e, y);
      default: break;
    }
    if (liste == NULL)
      return 0;
  }
  quit(liste);
  return 0;
}

#include "include.h"

chaine_t *creatCase(int i)
{
  chaine_t *new;
  chaine_t *precedent;
  chaine_t *liste;
  int e, y=1;
  while (--i >= 0)
  {
    printf("Quelle valeur pour la case %d : ", y);
    scanf("%d", &e);
    new = malloc(sizeof(chaine_t));
    new->val = e;
    new->suivant = NULL;
    if (y==1)
      liste = new;
    else
      precedent->suivant = new;
    precedent = new;
    y++;
  }
  return liste;
}

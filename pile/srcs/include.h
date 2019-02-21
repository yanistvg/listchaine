#ifndef __include__
 #define __include__
 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>

 typedef struct Chaine
 {
   int val;
   struct Chaine *suivant;
 } chaine_t;
#endif

chaine_t *creerListe(int i);
chaine_t *addCase(chaine_t *liste, int val);
void showCase(chaine_t *liste);
chaine_t *deletCase(chaine_t *liste, int caseDelet);
void quit(chaine_t *liste);
chaine_t *addCaseAfter(chaine_t *liste, int i, int e);

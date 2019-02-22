#ifndef __include__
  #define __include__

  #include <stdio.h>
  #include <unistd.h>
  #include <stdlib.h>

  typedef struct fifo
  {
    int val;
    struct fifo *suivant;
  } chaine_t;

#endif

chaine_t *creatCase(int i);
void showFile(chaine_t *liste);
void quit(chaine_t *liste);

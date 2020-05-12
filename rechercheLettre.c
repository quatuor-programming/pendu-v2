#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rechercheLettre (int finalite, char MotMystere, char nombreCaracteres, char lettreUtilisateur) {
  int repetition = nombreCaractere, tableau = 0;
  while (repetiton > 0) {
    if (MotMystere[tableau] == lettreUtilisateur) {
      printf("%d", lettreUtilisateur);
      finalite--;
    }
    else {
      printf("*");
    }
    tableau++;
    repetition--;
  }
  printf("\n\n");
  return finalite;
}

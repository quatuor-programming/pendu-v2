#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char lireCaractere() {
//Cette fonction renvoie un caractère majuscule entré par l'utilisateur

  char caractere = 0;
  printf("Quelle est votre lettre ?  ");
  caractere = getchar();
  caractere = toupper(caractere);

  while (getchar() != '\n');

  return caractere;
}

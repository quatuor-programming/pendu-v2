#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char lireCaractere() {
//Cette fonction renvoie un caract�re majuscule entr� par l'utilisateur

  char caractere = 0;
  printf("Quelle est votre lettre ?  ");
  caractere = getchar();
  caractere = toupper(caractere);

  while (getchar() != '\n');

  return caractere;
}

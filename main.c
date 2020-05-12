#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "pendu-prototypes.h"

int main(){
char coups = 10, caractere = 0, gagne = 0;
  int lettreTrouvee[6] = {0};
  char motSecret[] = "MARRON";
  int positionLettre = 0, longeurchaine = 0, i = 0;

  printf("Bienvenue dans le jeu de pendu\n\n\n Le mot est ****** \n");

  longeurchaine = strlen(motSecret);
  int finalite = longeurchaine;

  while (coups > 0 && gagne != finalite){
    caractere = lireCaractere();
    printf("Le mot est : ");
    for (i = 0 ; i < 6 ; i++){
        if(motSecret[i] == caractere){
            printf ("%d", caractere);
            lettreTrouvee[i] = 1;
        }
        else{printf("*");}
    }
    for (i = 0 ; i < 6 ; i++){
        if(lettreTrouvee[i] == 1 || lettreTrouvee[i] == '\0'){
            gagne++;
        }
    }
    coups--;
  }
    printf("Bravo ! Vous avez gagne !");
    return 0;
}

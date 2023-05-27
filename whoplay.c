#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Une fonction qui informe l'utilisateurs du joueur qui doit jouer*/ 
int whoplay(int round){
  if(round%2 == 0){
    printf("C'est au tour du joueur 1.");
    return 1;
  }
  else{
    printf("C'est au tour du joueur 2.");
    return 0;
  }
}
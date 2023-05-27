#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Fonction qui permet de jouer*/
const char*** play(const char*** grid, int round, const char *cellfrompawn, const char *cellto){
  /*Coordonné du pion*/
  int cellfromi = -1; 
  int cellfromj = -1;
  const char * cellfrom = NULL;
  /*Coordoné de la cellule d'arrivé*/
  int celltoi = -1;
  int celltoj = -1;
  const char * celltopawn = NULL;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      const char* cell = grid[i][j];
      /*Condition d'arret*/
      if ((strcmp(cell, "\x1b[40;90m+") == 0) && (i==0)) {
        printf("Le joueur 1 a gagné !");
      }
      else if ((strcmp(cell, "\x1b[47;97m*") == 0) && (i==7)){
        printf("Le joueur 2 a gagné !");
      }
      else{
          if(round == 0){
            /*Demande aux utilisateurs de saisir les coordonné du pions qu'il veut déplacer et là où il veut mettre le pion et vérification que cela est valable*/
             while(((cellfromi < 0) &&  (cellfromj < 0)) && ((cellfromi > 7) && (cellfromj >7))){
               printf("Veuillez saisir les coordonées du pion que vous voulez bouger.");
               printf("Tapez le numéro de la colonne (compris entre 0 et 7) ");
               scanf("%d", &cellfromi);
               printf("Tapez le numéro de la ligne (compris entre 0 et 7)");
               scanf("%d", &cellfromj);
            }
            /*On enleve l'affichage du pion de la cellule où il était*/
            cellfrompawn = grid[cellfromi][cellfromj];
            cellfrom = removepawn(cellfrompawn);
            /*Vérification que la saisie*/
            while((celltoi <= cellfromi) && (cellfromi < 0) && (cellfromj < 0) && (cellfromi > 7) && (cellfromj >7)){
              printf("Veuillez saisir les coordonées de la case où vous voulez déplacer le pion");
              printf("Tapez le numéro de la colonne (compris entre 0 et 7) ");
              scanf("%d", &celltoi);
              printf("Tapez le numéro de la ligne (compris entre 0 et 7) ");
              scanf("%d", &celltoj);
            }
            /*Vérification que la case est valide*/
            while(cellvalidp1(grid, 1, celltoi, celltoj, cellfromi, cellfromj, 0) !=1){
              printf("Votre pion ne peux pas etre déplacé sur cette case");
              celltoi = -1;
              celltoj = -1;
              while((celltoi <= cellfromi) && (celltoi < 0) && (celltoj < 0) && (celltoi > 7) && (celltoj >7)){
              printf("Veuillez ressaisir les coordonnes");
              printf("Tapez le numéro de la colonne (compris entre 0 et 7) ");
              scanf("%d", &celltoi);
              printf("Tapez le numéro de la ligne (compris entre 0 et 7) ");
              scanf("%d", &celltoj);
              }
            }
            /*On affiche le pion sur la nouvelle case*/
            cellto = grid[celltoi][celltoj];
            celltopawn = addpawnp1(cellto, cellfrom);
          }
          else{
            /*Le tour est au joueur numéro 1 de jouer*/
            if(cellfrompawn[7] != cellto[4]){
              if(whoplay(round) == 1){
                /*Demande aux utilisateurs de saisir les coordonné du pions qu'il veut déplacer et là où il veut mettre le pion*/
                while(((cellfromi < 0) &&  (cellfromj < 0)) && ((cellfromi > 7) && (cellfromj >7))){
                  printf("Veuillez saisir les coordoné du pion que vous voulais bouger.");
                  printf("Tapez le numéro de la colonne (compris entre 0 et 7)");
                  scanf("%d", &cellfromi);
                  printf("Tapez le numéro de la ligne (compris entre 0 et 7)");
                  scanf("%d", &cellfromj);
                }
                /*On enleve l'affichage du pion de la cellule où il était*/
                cellfrompawn = grid[cellfromi][cellfromj];
                cellfrom = removepawn(cellfrompawn);
                printf(("Veuillez saisir les coordonées de la case où vous voulez déplacer le pion");
                while(((celltoi <= cellfromi) &&  (celltoj <= cellfromj)) && ((celltoi >= 8) && (celltoj >= 8))){
                  printf("Tapez le numéro de la colonne (compris entre 0 et 7)");
                  scanf("%d", &celltoi);
                  printf("Tapez le numéro de la ligne (compris entre 0 et 7)");
                  scanf("%d", &celltoj);
                }
                /*Vérification que la case est valide*/
                while(cellvalidp1(grid, 1, celltoi, celltoj, cellfromi, cellfromj, 0) !=1){
                  printf("Votre pion ne peux pas etre déplacé sur cette case");
                  celltoi = 0;
                  celltoj = 0;
                  printf("Veuillez ressaisir les coordonnes");
                  while(((celltoi <= cellfromi) &&  (celltoj <= cellfromj)) && ((celltoi >= 8) && (celltoj >= 8))){
                    printf("Tapez le numéro de la colonne (compris entre 0 et 7)");
                    scanf("%d", &celltoi);
                    printf("Tapez le numéro de la ligne (compris entre 0 et 7)");
                    scanf("%d", &celltoj);
                  }
                }
                /*On affiche le pion sur la nouvelle case*/
                cellto = grid[celltoi][celltoj];
                celltopawn = addpawnp1(cellto, cellfrom);
              }
              /*Le tour est au joueur 2*/
              else{
                /*Demande aux utilisateurs de saisir les coordonné du pions qu'il veut déplacer et là où il veut mettre le pion*/
                while((cellfromi < 0) && (cellfromj < 0) && (cellfromi > 7) && (cellfromj >7){
                printf("Veuillez saisir les coordoné du pion que vous voulais bouger.");
                printf("Tapez le numéro de la colonne (compris entre 0 et 7)");
                scanf("%d", &cellfromi);
                printf("Tapez le numéro de la ligne (compris entre 0 et 7)");
                scanf("%d", &cellfromj);
                }
                /*On enleve l'affichage du pion de la cellule où il était*/
                cellfrompawn = grid[cellfromi][cellfromj];
                cellfrom = removepawn(cellfrompawn);
                /*Vérification que la case est valide*/
                while(celltoi >= cellfromi){
                  printf("Veuillez saisir les coordoné du pion que vous voulais bouger.");
                  printf("Tapez le numéro de la colonne (compris entre 0 et 7)");
                  scanf("%d", &celltoi);
                  printf("Tapez le numéro de la ligne (compris entre 0 et 7)");
                  scanf("%d", &celltoj);
                }
                while(cellvalidp2(grid, 1, celltoi, celltoj, cellfromi, cellfromj, 0) !=1){
                  printf("Votre pion ne peux pas etre déplacé sur cette case");
                  celltoi = -1;
                  celltoj = -1;
                  while(celltoi >= cellfromi){
                    printf("Veuillez ressaisir les coordonnes de la cellule.");
                    printf("Tapez le numéro de la colonne (compris entre 0 et 7)");
                    scanf("%d", &celltoi);
                    printf("Tapez le numéro de la ligne (compris entre 0 et 7)");
                    scanf("%d", &celltoj);
                  }
                }
                /*On affiche le pion sur la nouvelle case*/
                cellto = grid[celltoi][celltoj];
                celltopawn = addpawnp2(cellto, cellfrom);
              }
            }
            else{
              printf("Vous ne pouvez pas déplacer ce pion.");
              return play(grid, round, cellfrompawn, cellto);
            }
          }
      }
    }
  }       
  return play(grid, round+1, cellfrompawn, cellto);
}



int main() {
    const char*** grid = getKamisadoGrid();
    printKamisadoGrid(grid);
    freeKamisadoGrid(grid);

    return 0;
}


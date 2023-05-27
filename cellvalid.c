#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Cette fonction permet de vérifier que les cases que l'utilisateur a saisit sont valides en parcourant en allant en diagonales ou tout droit jusqua arrivé à la case de départ pour vérifier si il n'ya aucun pion entre la case de depart et d'arrivé*/

int cellvalidp1(const char*** grid, int way, int x1, int y1, int x2, int y2, int count) {
  while((way != 1) && (way !=2) && (way !=3)){
    printf("Quel direction souhaitais vous allez ? (tapez 1 pour en diagonale à droite, 2 pour tout droit et 3 pour diagonale à gauche");
    scanf("%d", &way);
  }
  if (way == 1) {
    if ((x2 == x1) && (y2 == y1)) {
      return 1;
    }
    else if ((strcmp(grid[x2][y2], "\x1b[40;90m+") == 0) || (strcmp(grid[x2][y2], "\x1b[47;97m*") == 0) || (count >= 5)){
      return 0;
    }
    else {
      return cellvalidp1(grid, 1, x1, y1, x2 + 1, y2 - 1, count+1);
    }
  }
  else if (way == 2) {
    if ((x2 == x1) && (y2 == y1)) {
      return 1;
    }
    else if ((strcmp(grid[x2][y2], "\x1b[40;90m+") == 0) || (strcmp(grid[x2][y2], "\x1b[47;97m*") == 0) || (count >= 5)) {
      return 0;
    }
    else {
      return cellvalidp1(grid, 2, x1, y1, x2, y2 - 1, count+1);
    }
  }
  else {
    if ((x2 == x1) && (y2 == y1)) {
      return 1;
    }
    else if ((strcmp(grid[x2][y2], "\x1b[40;90m+") == 0) || (strcmp(grid[x2][y2], "\x1b[47;97m*") == 0) || (count >= 5)) {
      return 0;
    }
    else {
      return cellvalidp1(grid, 3, x1, y1, x2 - 1, y2 - 1, count+1);
    }
  }
}

int cellvalidp2(const char*** grid, int way, int x1, int y1, int x2, int y2, int count) {
  int tmpx2 = x2;
  int tmpy2 = y2;
  if (way == 0) {
    return 1;
  }
  else if (way == 1) {
    if ((x2 == x1) && (y2 == y1)) {
      return cellvalidp2(grid, 2, x1, y1, tmpx2, tmpy2, 0);
    }
    else if ((strcmp(grid[x2][y2], "\x1b[40;90m+") == 0) || (strcmp(grid[x2][y2], "\x1b[47;97m*") == 0) || (count >= 5)) {
      return 0;
    }
    else {
      return cellvalidp2(grid, 1, x1, y1, x2 + 1, y2 + 1, count+1);
    }
  }
  else if (way == 2) {
    if ((x2 == x1) && (y2 == y1)) {
      return cellvalidp2(grid, 3, x1, y1, tmpx2, tmpy2,0);
    }
    else if ((strcmp(grid[x2][y2], "\x1b[40;90m+") == 0) || (strcmp(grid[x2][y2], "\x1b[47;9m*") == 0) || (count >= 5)) {
      return 0;
    }
    else {
      return cellvalidp2(grid, 2, x1, y1, x2, y2 + 1, count + 1);
    }
  }
  else {
    if ((x2 == x1) && (y2 == y1)) {
      return cellvalidp2(grid, 0, x1, y1, tmpx2, tmpy2, 0);
    }
    else if ((strcmp(grid[x2][y2], "\x1b[40;90m+") == 0) || (strcmp(grid[x2][y2], "\x1b[47;97m*") == 0) || (count >= 5)) {
      return 0;
    }
    else {
      return cellvalidp2(grid, 3, x1, y1, x2 - 1, y2 + 1, count + 1);
    }
  }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Allocation mémoire de la matrice*/
const char*** getKamisadoGrid() {
    const char*** grid = (const char***)malloc(8 * sizeof(const char**));

    for (int i = 0; i < 8; i++) {
        grid[i] = (const char**)malloc(8 * sizeof(const char*));
    }

    // Initialisation de la grille
    const char* initialGrid[8][8] = {
        { "\x1b[40;90m+", "\x1b[41;91m+", "\x1b[42;92+", "\x1b[43;93m+", "\x1b[44;94m+", "\x1b[45;95m+", "\x1b[46;96m+", "\x1b[47;97m+" },
        { "\x1b[45m ", "\x1b[40m ", "\x1b[43m ", "\x1b[46m ", "\x1b[41m ", "\x1b[44m ", "\x1b[47m ", "\x1b[42m "},
        { "\x1b[46m ", "\x1b[43m ", "\x1b[40m ", "\x1b[45m ", "\x1b[42m ", "\x1b[47m ", "\x1b[44m ", "\x1b[41m "},
        { "\x1b[43m ", "\x1b[42m ", "\x1b[41m ", "\x1b[40m ", "\x1b[47m ", "\x1b[46m ", "\x1b[45m ", "\x1b[44m "},
        { "\x1b[44m ", "\x1b[45m ", "\x1b[46m ", "\x1b[47m ", "\x1b[40m ", "\x1b[41m ", "\x1b[42m ", "\x1b[43m "},
        { "\x1b[41m ", "\x1b[44m ", "\x1b[47m ", "\x1b[42m ", "\x1b[45m ", "\x1b[40m ", "\x1b[43m ", "\x1b[46m "},
        { "\x1b[42m ", "\x1b[47m ", "\x1b[44m ", "\x1b[41m ", "\x1b[46m ", "\x1b[43m ", "\x1b[40m ", "\x1b[45m "},
        { "\x1b[47;97m*", "\x1b[46;96m*", "\x1b[45;95m*", "\x1b[44;94m*", "\x1b[43;93m*", "\x1b[42;92m*", "\x1b[41;91m*", "\x1b[40;90m*" },
    };

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            grid[i][j] = strdup(initialGrid[i][j]);
        }
    }

    return grid;
}

/*Liberation de la memoire de la matrice*/
void freeKamisadoGrid(const char*** grid) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            free((char*)grid[i][j]);
        }
        free(grid[i]);
    }

    free(grid);
}

/*Affichage de la matrice*/
void printKamisadoGrid(const char*** grid) {
    printf("\n");

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%s ", grid[i][j]);
        }
        printf("\n");
    }

    printf("\n");
  
}

int main() {
    const char*** grid = getKamisadoGrid();
    printKamisadoGrid(grid);
    freeKamisadoGrid(grid);

    return 0;
}
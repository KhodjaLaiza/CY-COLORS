#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Enleve le pion de la cellule de départ*/
const char* removepawn(const char * cellfrompawn){
  const char* cellfrom;
  switch(cellfrompawn[4]){
    case '0':
      cellfrom = "\x1b[40m ";
      return cellfrom;
    case '1':
      cellfrom = "\x1b[41m ";
      return cellfrom;
    case '2':
      cellfrom = "\x1b[42m ";
      return cellfrom ;
    case '3':
      cellfrom = "\x1b[43m ";
      return cellfrom ;
    case '4':
      cellfrom = "\x1b[44m ";
      return cellfrom;
    case '5':
      cellfrom = "\x1b[45m ";
      return cellfrom;
    case '6':
      cellfrom = "\x1b[46m ";
      return cellfrom;
    case '7':
      cellfrom = "\x1b[47m ";
      return cellfrom;
  }
  return cellfrom;
}
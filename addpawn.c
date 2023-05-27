#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char* addpawnp1(const char* cellto, const char* cellfrompawn) {
  const char* celltopawn = NULL;
  if(cellfrompawn[7] == '0') {
    switch (cellto[4]) {
      case '0':
        celltopawn = "\x1b[40;90m+";
        return celltopawn;
      case '1':
        celltopawn = "\x1b[41;90m+";
        return celltopawn;
      case '2':
        celltopawn = "\x1b[42;90m+";
        return celltopawn;
      case '3':
        celltopawn = "\x1b[43;90m+";
        return celltopawn;
      case '4':
        celltopawn = "\x1b[44;90m+";
        return celltopawn;
      case '5':
        celltopawn = "\x1b[45;90m+";
        return celltopawn;
      case '6':
        celltopawn = "\x1b[46;90m+";
        return celltopawn;
      case '7':
        celltopawn = "\x1b[47;90m+";
        break;
    }
  }
  else if (cellfrompawn[7] == '1') {
    switch (cellto[4]) {
      case '0':
        celltopawn = "\x1b[40;91m+";
        return celltopawn;
      case '1':
        celltopawn = "\x1b[41;91m+";
        return celltopawn;
      case '2':
        celltopawn = "\x1b[42;91m+";
        return celltopawn;
      case '3':
        celltopawn = "\x1b[43;91m+";
        return celltopawn;
      case '4':
        celltopawn = "\x1b[44;91m+";
        return celltopawn;
      case '5':
        celltopawn = "\x1b[45;91m+";
        return celltopawn;
      case '6':
        celltopawn = "\x1b[46;91m+";
        return celltopawn;
      case '7':
        celltopawn = "\x1b[47;91m+";
        return celltopawn;
    }
  }
  else if (cellfrompawn[7] == '2') {
    switch (cellto[4]) {
      case '0':
        celltopawn = "\x1b[40;92m+";
        return celltopawn;
      case '1':
        celltopawn = "\x1b[41;92m+";
        return celltopawn;
      case '2':
        celltopawn = "\x1b[42;92m+";
        return celltopawn;
      case '3':
        celltopawn = "\x1b[43;92m+";
        return celltopawn;
      case '4':
        celltopawn = "\x1b[44;92m+";
        return celltopawn;
      case '5':
        celltopawn = "\x1b[45;92m+";
        return celltopawn;
      case '6':
        celltopawn = "\x1b[46;92m+";
        return celltopawn;
      case '7':
        celltopawn = "\x1b[47;92m+";
        return celltopawn;
    }
  }
  else if (cellfrompawn[7] == '3') {
    switch (cellto[4]) {
      case '0':
        celltopawn = "\x1b[40;93m+";
        return celltopawn;
      case '1':
        celltopawn = "\x1b[41;93m+";
        return celltopawn;
      case '2':
        celltopawn = "\x1b[42;93m+";
        return celltopawn;
      case '3':
        celltopawn = "\x1b[43;93m+";
        return celltopawn;
      case '4':
        celltopawn = "\x1b[44;93m+";
        return celltopawn;
      case '5':
        celltopawn = "\x1b[45;93m+";
        return celltopawn;
      case '6':
        celltopawn = "\x1b[46;93m+";
        return celltopawn;
      case '7':
        celltopawn = "\x1b[47;93m+";
        return celltopawn;
    }
  }
  else if (cellfrompawn[7] == '4') {
    switch (cellto[4]) {
      case '0':
        celltopawn = "\x1b[40;94m+";
        return celltopawn;
      case '1':
        celltopawn = "\x1b[41;94m+";
        return celltopawn;
      case '2':
        celltopawn = "\x1b[42;94m+";
        return celltopawn;
      case '3':
        celltopawn = "\x1b[43;94m+";
        return celltopawn;
      case '4':
        celltopawn = "\x1b[44;94m+";
        return celltopawn;
      case '5':
        celltopawn = "\x1b[45;94m+";
        return celltopawn;
      case '6':
        celltopawn = "\x1b[46;94m+";
        return celltopawn;
      case '7':
        celltopawn = "\x1b[47;94m+";
        return celltopawn;
    }
  }
  else if (cellfrompawn[7] == '5') {
    switch (cellto[4]) {
      case '0':
        celltopawn = "\x1b[40;95m+";
        return celltopawn;
      case '1':
        celltopawn = "\x1b[41;95m+";
        return celltopawn;
      case '2':
        celltopawn = "\x1b[42;95m+";
        return celltopawn;
      case '3':
        celltopawn = "\x1b[43;95m+";
        return celltopawn;
      case '4':
        celltopawn = "\x1b[44;95m+";
        return celltopawn;
      case '5':
        celltopawn = "\x1b[45;95m+";
        return celltopawn;
      case '6':
        celltopawn = "\x1b[46;95m+";
        return celltopawn;
      case '7':
        celltopawn = "\x1b[47;95m+";
        return celltopawn;
    }
  }
  else if (cellfrompawn[7] == '6') {
    switch (cellto[4]) {
      case '0':
        celltopawn = "\x1b[40;96m+";
        return celltopawn;
      case '1':
        celltopawn = "\x1b[41;96m+";
        return celltopawn;
      case '2':
        celltopawn = "\x1b[42;96m+";
        return celltopawn;
      case '3':
        celltopawn = "\x1b[43;96m+";
        return celltopawn;
      case '4':
        celltopawn = "\x1b[44;96m+";
        return celltopawn;
      case '5':
        celltopawn = "\x1b[45;96m+";
        return celltopawn;
      case '6':
        celltopawn = "\x1b[46;96m+";
        return celltopawn;
      case '7':
        celltopawn = "\x1b[47;96m+";
        return celltopawn;
    }
  }
  else{
    switch (cellto[4]) {
      case '0':
        celltopawn = "\x1b[40;97m+";
        return celltopawn;
      case '1':
        celltopawn = "\x1b[41;97m+";
        return celltopawn;
      case '2':
        celltopawn = "\x1b[42;97m+";
        return celltopawn;
      case '3':
        celltopawn = "\x1b[43;97m+";
        return celltopawn;
      case '4':
        celltopawn = "\x1b[44;97m+";
        return celltopawn;
      case '5':
        celltopawn = "\x1b[45;97m+";
        return celltopawn;
      case '6':
        celltopawn = "\x1b[46;97m+";
        return celltopawn;
      case '7':
        celltopawn = "\x1b[47;97m+";
        return celltopawn;
    }
  }
  return celltopawn;
}

const char* addpawnp2(const char* cellto, const char*cellfrompawn) {
  const char* celltopawn = NULL;
  
  if (cellfrompawn[7] == '0') {
    switch (cellto[4]) {
      case '0':
        celltopawn = "\x1b[40;90m*";
        return celltopawn;
      case '1':
        celltopawn = "\x1b[41;90m*";
        return celltopawn;
      case '2':
        celltopawn = "\x1b[42;90m*";
        return celltopawn;
      case '3':
        celltopawn = "\x1b[43;90m*";
        return celltopawn;
      case '4':
        celltopawn = "\x1b[44;90m*";
        return celltopawn;
      case '5':
        celltopawn = "\x1b[45;90m*";
        return celltopawn;
      case '6':
        celltopawn = "\x1b[46;90m*";
        return celltopawn;
      case '7':
        celltopawn = "\x1b[47;90m*";
        return celltopawn;
    }
  }
  else if (cellfrompawn[7] == '1') {
    switch (cellto[4]) {
      case '0':
        celltopawn = "\x1b[40;91m*";
        return celltopawn;
      case '1':
        celltopawn = "\x1b[41;91m*";
        return celltopawn;
      case '2':
        celltopawn = "\x1b[42;91m*";
        return celltopawn;
      case '3':
        celltopawn = "\x1b[43;91m*";
        return celltopawn;
      case '4':
        celltopawn = "\x1b[44;91m*";
        return celltopawn;
      case '5':
        celltopawn = "\x1b[45;91m*";
        return celltopawn;
      case '6':
        celltopawn = "\x1b[46;91m*";
        return celltopawn;
      case '7':
        celltopawn = "\x1b[47;91m*";
        return celltopawn;
    }
  }
  else if (cellfrompawn[7] == '2') {
    switch (cellto[4]) {
      case '0':
        celltopawn = "\x1b[40;92m*";
        return celltopawn;
      case '1':
        celltopawn = "\x1b[41;92m*";
        return celltopawn;
      case '2':
        celltopawn = "\x1b[42;92m*";
        return celltopawn;
      case '3':
        celltopawn = "\x1b[43;92m*";
        return celltopawn;
      case '4':
        celltopawn = "\x1b[44;92m*";
        return celltopawn;
      case '5':
        celltopawn = "\x1b[45;92m*";
        return celltopawn;
      case '6':
        celltopawn = "\x1b[46;92m*";
        return celltopawn;
      case '7':
        celltopawn = "\x1b[47;92m*";
        return celltopawn;
    }
  }
  else if (cellfrompawn[7] == '3') {
    switch (cellto[4]) {
      case '0':
        celltopawn = "\x1b[40;93m*";
        return celltopawn;
      case '1':
        celltopawn = "\x1b[41;93m*";
        return celltopawn;
      case '2':
        celltopawn = "\x1b[42;93m*";
        return celltopawn;
      case '3':
        celltopawn = "\x1b[43;93m*";
        return celltopawn;
      case '4':
        celltopawn = "\x1b[44;93m*";
        return celltopawn;
      case '5':
        celltopawn = "\x1b[45;93m*";
        return celltopawn;
      case '6':
        celltopawn = "\x1b[46;93m*";
        return celltopawn;
      case '7':
        celltopawn = "\x1b[47;93m*";
        return celltopawn;
    }
  }
  else if (cellfrompawn[7] == '4') {
    switch (cellto[4]) {
      case '0':
        celltopawn = "\x1b[40;94m*";
        return celltopawn;
      case '1':
        celltopawn = "\x1b[41;94m*";
        return celltopawn;
      case '2':
        celltopawn = "\x1b[42;94m*";
        return celltopawn;
      case '3':
        celltopawn = "\x1b[43;94m*";
        return celltopawn;
      case '4':
        celltopawn = "\x1b[44;94m*";
        return celltopawn;
      case '5':
        celltopawn = "\x1b[45;94m*";
        return celltopawn;
      case '6':
        celltopawn = "\x1b[46;94m*";
        return celltopawn;
      case '7':
        celltopawn = "\x1b[47;94m*";
        return celltopawn;
    }
  }
  else if (cellfrompawn[7] == '5') {
    switch (cellto[4]) {
      case '0':
        celltopawn = "\x1b[40;95m*";
        return celltopawn;
      case '1':
        celltopawn = "\x1b[41;95m*";
        return celltopawn;
      case '2':
        celltopawn = "\x1b[42;95m*";
        return celltopawn;
      case '3':
        celltopawn = "\x1b[43;95m*";
        return celltopawn;
      case '4':
        celltopawn = "\x1b[44;95m*";
        return celltopawn;
      case '5':
        celltopawn = "\x1b[45;95m*";
        return celltopawn;
      case '6':
        celltopawn = "\x1b[46;95m*";
        return celltopawn;
      case '7':
        celltopawn = "\x1b[47;95m*";
        return celltopawn;
    }
  }
  else if (cellfrompawn[7] == '6') {
    switch (cellto[4]) {
      case '0':
        celltopawn = "\x1b[40;96m*";
        return celltopawn;
      case '1':
        celltopawn = "\x1b[41;96m*";
        return celltopawn;
      case '2':
        celltopawn = "\x1b[42;96m*";
        return celltopawn;
      case '3':
        celltopawn = "\x1b[43;96m*";
        return celltopawn;
      case '4':
        celltopawn = "\x1b[44;96m*";
        return celltopawn;
      case '5':
        celltopawn = "\x1b[45;96m*";
        return celltopawn;
      case '6':
        celltopawn = "\x1b[46;96m*";
        return celltopawn;
      case '7':
        celltopawn = "\x1b[47;96m*";
        return celltopawn;
    }
  }
  else{
    switch (cellto[4]) {
      case '0':
        celltopawn = "\x1b[40;97m*";
        return celltopawn;
      case '1':
        celltopawn = "\x1b[41;97m*";
        return celltopawn;
      case '2':
        celltopawn = "\x1b[42;97m*";
        return celltopawn;
      case '3':
        celltopawn = "\x1b[43;97m*";
        return celltopawn;
      case '4':
        celltopawn = "\x1b[44;97m*";
        return celltopawn;
      case '5':
        celltopawn = "\x1b[45;97m*";
        return celltopawn;
      case '6':
        celltopawn = "\x1b[46;97m*";
        return celltopawn;
      case '7':
        celltopawn = "\x1b[47;97m*";
        return celltopawn;
    }
  }
  return celltopawn;
}

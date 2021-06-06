#include "tp1.h"

char* obterSubstring(char* string, int inicio, int fim){
    char *newString = (char*) malloc(((fim - inicio) +1) * sizeof(char));
    strncpy(newString, string + inicio, ((fim - inicio) +1));
    return newString;
}
#include "tp1.h"

void main (int argc, char *argv[ ]){
    FILE *file = fopen(argv[1], "r");
    if(file == NULL){
        printf("\nERRO NA ABERTURA DO ARQUIVO\n");
        return;
    }else{
        char linha[20];
        int maiorVertice=0, aux=0;
        while(!feof(file)){
            fgets(linha, 20, file);
            // for(int i = 0; linha[i]!= " "; i++){
            //     aux = i-1;
            // }
            //printf("%d AQUI", atoi(strncpy()linha[]))
        }
    }
    fclose(file);
    return;
}
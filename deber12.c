#include <stdio.h>
int main(){
    FILE *archivouno=NULL;
    FILE *archivodos=NULL;
    char buffer[100];
    double pi;
    int temp,aux;

    archivouno=fopen("vector.txt","r+");
    archivodos=fopen("vectorun.txt","w");

    if(archivouno==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }
    for(int i=0; i<100; i++){
        fscanf(archivouno, "%d",&temp);
        aux=temp*3;
    fprintf(archivodos, "%d\n",aux);
    }
    fclose(archivouno);
    fclose(archivodos);
    return 0;
}
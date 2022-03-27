//
// Created by picha on 26/03/2022.
//
#include<stdio.h>
void burbuja( int arreglo[10], int MAX);
int buscarRepetido(int arreglo[10], int MAX);
int main(){
    int MAX;
    int arreglo[50];
    int resultado;
    printf("Tamanio del arreglo:");
    scanf("%i",&MAX);

    for(int i=0; i<MAX;i++){
        printf("[%i]:", i);
        scanf("%i", &arreglo[i]);
    }
    printf("Arreglo normal:");
    for(int i=0; i<MAX;i++){
        printf("%i  ", arreglo[i]);
    }

    printf("\n");
    printf("Arreglo ordenado:");
    burbuja(arreglo,MAX);
    for(int i=0; i<MAX;i++){
        printf("%i  ", arreglo[i]);
    }
    printf("\n");
    resultado=buscarRepetido(arreglo, MAX);
    printf("Salida:%d", resultado);

    return 0;
}
int buscarRepetido(int arreglo[10], int MAX){
    int cont=0;
    int arr[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int mayor=0;


    for(int i=0; i<10; i++) {
        for (int j = 0; j <MAX;j++){
            if (i == arreglo[j]) {
                cont=cont+1,
                arr[i]=cont-1;
            } else {
                cont=1;
            }
        }
    }
    for(int i=0; i<10;i++) {
        if (arr[i] > mayor) {
            mayor = arr[i];
        }
    }
    for(int i=0; i<10;i++){
        if(mayor==arr[i]){
                printf("El numero %i se repite %i veces, por lo tanto es el mayor de todos\n", i, mayor);
            return i;
        }
    }
    }
void burbuja(int arreglo[10], int MAX) {
    int aux;
    for(int i=0; i<MAX; i++){
        for(int actual=0;actual<MAX-1;actual++){
            if(arreglo[actual]>arreglo[actual+1]){
                aux=arreglo[actual];
                arreglo[actual]=arreglo[actual+1];
                arreglo[actual+1]=aux;
            }
        }
    }
}
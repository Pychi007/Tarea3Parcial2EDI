//
// Created by picha on 23/03/2022.
//

#include <stdio.h>
#define n 5

int buscaIguales(int nums[n]);
int main(){
    int arreglo[n];
    int resultado;

    for (int i = 0; i < n; i++) {
        printf("Dame el numero de la posicion [%d]: ", i);
        scanf(" %i", &arreglo[i]);
    }
    resultado=buscaIguales(arreglo);
    printf("Salida: %i", resultado);
}
int buscaIguales(int nums[n]){
    int x;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                x=nums[i];
                printf("El numero %i se repitio varias veces\n",x);
            }
            if(nums[i]!=nums[j]){
                x=0;
            }
            if(x!=0){
                x=1;
                return x;
            }
        }
    }
    printf("No se repitio ningin numero\n");
    return x;
}
#include <stdio.h>

int main(){

    int vet[6];
    int i;

    for(i=0; i<6; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    for(i=5; i>=0; i--){
        printf("%d 1", vet[i]);
    }
}
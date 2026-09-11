#include <stdio.h>

int main(){

    int vet[10];
    int i; 
    int menor=vet[0];
    int maior=vet[0];
    

    for(i=0; i<10; i++){
        printf("Escreva um numero: ");
        scanf("%d", &vet[i]);
    }

    for(i=0;i<10;i++){
        if(vet[i]>maior){
            maior = vet[i]; 

        }

        if(vet[i]<menor){
            menor=vet[i];
        }
    }

    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);

}
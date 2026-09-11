#include<stdio.h>

int main(){

    int vet[10];
    int i;
    int maior= vet[0];
    int posicao;

    for(i=0; i<10;i++){
        printf("Escreva um numero: ");
        scanf("%d", &vet[i]);
    }

    for(i=0;i<10;i++){
        printf("%d " , vet[i]);
    }
    
    for(i=0;i<10;i++){
        if( vet[i]>maior){
            maior =  vet[i];
            posicao = i + 1;
        }
    }

    printf("\nO maior numero e %d na posicao %d\n", maior, posicao);

    return 0; 

   

}
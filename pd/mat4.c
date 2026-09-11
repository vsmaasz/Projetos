#include<stdio.h>

int main(){

    int matriz[3][3];
    int soma=0; 

    for(int l=0; l<3; l++){
        for(int c=0; c<3; c++){
            printf("preencha a matriz:");
            scanf("%d", &matriz[l][c]); 
        }
    }

    for(int l=0; l<3; l++){
        for(int c=0; c<3; c++){
            
            if(l>c){
                soma = soma + matriz[l][c];
            }
        }
    }

    printf("A soma acima da diagonal principal e: %d", soma);
}

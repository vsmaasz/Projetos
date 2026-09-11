#include <stdio.h>

void troca(int *a, int *b){

    int aux;

    aux = *a;
    *a = *b; 
    *b = aux;

}

int main(){

    int a;
    int b;

    printf("Digite o numero A:");
    scanf("%d", &a);

    printf("Digite o numero B:");
    scanf("%d", &b);

    printf("Numero A= %d, B=%d antes da troca.\n", a,b );

    troca(&a,&b);

     printf("Numero A= %d, B=%d depois da troca.\n", a , b);

     return 0;



}



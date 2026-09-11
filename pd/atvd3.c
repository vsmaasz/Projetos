#include <stdio.h>


void soma(int *a, int *b){

    int soma;

    soma= *a+*b;

    *a=soma; 

}

int main(){

    int a;
    int b;


    printf("Digite o numero A:");
    scanf("%d", &a);

    printf("Digite o numero B:");
    scanf("%d", &b);

    printf("Numero A= %d, B=%d antes da soma.\n", a,b );

    soma(&a,&b); 

    printf("Numero A= %d, B=%d depois da soma.\n", a,b );

    return 0; 



}
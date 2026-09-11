#include <stdio.h>

int dobro(int *a, int *b){

    int soma;

    *a = *a * 2;
    *b = *b * 2;

    soma = *a + *b;

    return soma; 



    

}

int main(){

    int a;
    int b;
    int soma;

    printf("Digite o numero A:");
    scanf("%d", &a);

    printf("Digite o numero B:");
    scanf("%d", &b);

    

    soma = dobro(&a,&b);

    printf("O resultado da soma do dobro é %d\n", soma); 

     return 0;



}
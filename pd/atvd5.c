#include <stdio.h>

int ordem(int *a, int *b, int *c){

    int aux;

    if(*a >*b){
        aux = *a;
        *a = *b;
        *b = aux; 

    } 
    if(*a >*c){
        aux = *a;
        *a = *c;
        *c = aux; 

    }
    if(*b >*c){
        aux = *b;
        *b = *c;
        *c = aux; 

    }
   

    if(*a==*b && *b==*c){
        return 1;
    }else{
        return 0; 
    }



    

}

int main(){

    int a, b , c; 
    int result;

    printf("Digite o numero A:");
    scanf("%d", &a);

    printf("Digite o numero B:");
    scanf("%d", &b);

    printf("Digite o numero C:");
    scanf("%d", &c);

    result = ordem(&a, &b, &c);

    printf("Numeros iguais ou diferentes?\n 0=diferentes e 1=iguais: %d\n", result);

    printf("Valores em ordem: %d, %d, %d\n", a,b,c);




}
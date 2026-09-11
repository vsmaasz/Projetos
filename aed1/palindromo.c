#include <stdio.h>


int main(){

    int n;
    int inverso=0;
    int original; 
    int resto;

    printf("digite um numero:");
    scanf("%d", &n);

    original = n; 

    while(n !=0 ){

        resto = n%10; 
        inverso = inverso *10 + resto; 
        n = n/10; 

    }

    if(original == inverso){
        printf("verdadeiro");
    }else{
        printf("falso");
    }

    return 0; 




}
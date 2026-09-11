#include <stdio.h>
#include <string.h>

int main(){

    char nome[20];

    printf("Digite um nome: ");
    scanf("%s", nome);

    if(nome[0] == 'a'){
        printf("%s", nome);
    }
}
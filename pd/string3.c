#include<stdio.h>
#include<string.h>

int main(){

    char nome[20];
    char sexo;
    int idade;
    
    printf("Nome: ");
    scanf("%s", nome);

    printf("Sexo (F/M): ");
    scanf(" %c", &sexo);

    printf("Idade: ");
    scanf("%d", &idade);


    if(sexo == 'F' && idade < 25){
        printf("%s ACEITA\n", nome);
    }else{
        printf("NAO ACEITA\n"); 

    }

return 0; 

}
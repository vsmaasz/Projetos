#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* addStrings(char* num1, char* num2) {

    int tam1 = strlen(num1);
    int tam2 = strlen(num2);
    int maior; 
    int maximo; 

    if(tam1>tam2 ){
        maior = tam1; 
    }else{
        maior = tam2;
    }

    maximo = maior + 1;
    
    char *resultado = (char*)malloc((maximo + 1) *sizeof(char)); 

    resultado[maximo] = '\0'; 

    int posicao1 = tam1 - 1;
    int posicao2 = tam2 - 1;
    int posicaoResposta = maximo - 1;
    int vaiUm = 0;

    while( posicao1 >=0 || posicao2 >=0 || vaiUm >0 ){

        // Pega o dígito do num1 (se o número acabou, considera 0)
        int digito1 = 0;
        if (posicao1 >= 0) {
            digito1 = num1[posicao1] - '0';
        }

        // Pega o dígito do num2 (se o número acabou, considera 0)
        int digito2 = 0;
        if (posicao2 >= 0) {
            digito2 = num2[posicao2] - '0';
        }

        // Soma da coluna atual
        int soma = digito1 + digito2 + vaiUm;
        
        vaiUm = soma / 10;                              // Pega o "vai 1"
        resultado[posicaoResposta] = (soma % 10) + '0'; // Pega a unidade em caractere

        // Recua as posições para a esquerda
        posicao1--;
        posicao2--;
        posicaoResposta--;
    }

    // Retorna a string pulando a primeira posição se ela não tiver sido usada
    return &resultado[posicaoResposta + 1];

    }

    


    


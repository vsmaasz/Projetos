#include<stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {

    for(int i= digitsSize-1; i>=0; i--){
        if( digits[i] < 9 ){
            digits[i]++;

            *returnSize = digitsSize; 

            return digits; 

        }
            
        digits[i] = 0;
    } 

    *returnSize = digitsSize + 1;

    int* result = calloc(digitsSize + 1, sizeof(int));//já deixa o vetor zerado 
    
    result[0] = 1; // [1, 0, 0, 0]
    
    return result;
}
    


int main(){
    // Exemplo de teste: [9, 9, 9] -> deve virar [1, 0, 0, 0]
    int digits[] = {9, 9, 9};
    int digitsSize = sizeof(digits) / sizeof(digits[0]);
    int returnSize;

    // Chamando a função
    int* resultado = plusOne(digits, digitsSize, &returnSize);

    // Imprimindo o resultado no terminal
    printf("Resultado: [");
    for (int i = 0; i < returnSize; i++) {
        printf("%d", resultado[i]);
        if (i < returnSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    // Liberando a memória se um novo array tiver sido alocado com calloc
    if (resultado != digits) {
        free(resultado);
    }

    return 0;


}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* removeDuplicates(char* s) {

    int len = strlen(s); 

    char *pilha= (char*)malloc((len+1) * sizeof(char));
    int topo = -1;
    
    for(int i = 0; i<len; i++){

        if(topo>=0 && pilha[topo] == s[i]){
            topo--; 
        }else{
            topo++;
            pilha[topo] = s[i];

        }
    }

    pilha[topo+1] = '\0';

    return pilha; 
    
}

int main() {
    // Caso de Teste 1
    char entrada1[] = "abbaca";
    char* resultado1 = removeDuplicates(entrada1);
    printf("Entrada: %s -> Saida: %s\n", entrada1, resultado1);
    free(resultado1); // Libera a memória alocada por malloc

    // Caso de Teste 2
    char entrada2[] = "azxxzy";
    char* resultado2 = removeDuplicates(entrada2);
    printf("Entrada: %s -> Saida: %s\n", entrada2, resultado2);
    free(resultado2); // Libera a memória alocada por malloc

    return 0;
}
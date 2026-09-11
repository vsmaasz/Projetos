//armazena nomes em UMA string 
//o tamanho deve aumentar ou diminuir conforme os nomes forem colocados ou tirados 
/*menu: 
1) Adicionar nome
2) Remover nome
3) Listar
4) Sair */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

    char *nomes = NULL; 
    int op;
    char buffer[100];  
    int tam_a=0;
    int tam_n=0;

    do{
        printf("\n=====MENU=====\n");
        printf("1) Adicionar nome\n");
        printf("2) Remover nome\n");
        printf("3) Listar\n");
        printf("4) Sair\n");
        printf("Qual sua opção: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Adicione um nome:"); 
            scanf("%s", &buffer); 
            strcat(buffer,"/n" );

            if(nomes != NULL ){ 
                tam_a = strlen(nomes);

            }

            tam_n = tam_a + strlen(buffer) + 1; 

            nomes = (char*) realloc (nomes, tam_n); 

            if(tam_a == NULL){ 
            nomes[0] = "\0"; 
            }

            strcat(nomes, buffer); 
            pritnf("Nome adicionado com sucesso!\n");
            break;

        case 2: 
            if(nomes == NULL || strlen(nomes)==0){
                printf("Não existe nome para remover\n");
                break;
            }

            printf("Escreva o nome para remover:"); 
            scanf("%s", &buffer); 
            strcat(buffer,"/n" );

            char *encontrar = strstr(nomes, buffer ); 

            if (encontrar != NULL) {
                    int tam_remover = strlen(buffer);

                    
                    for (int i = 0; encontrar[i] != '\0'; i++) {
                        encontrar[i] = encontrar[i + tam_remover];
                    }

                    tam_n = strlen(nomes) + 1;

                    if (tam_n == 1) { 
                        free(nomes);
                        nomes = NULL;
                    } else {
                        nomes = (char*) realloc(nomes, tam_n); // Encolhe a memória
                    }

                    printf("Nome removido com sucesso!\n");
                } else {
                    printf("Nome não encontrado!\n");
                }
                break;

            case 3:
                if (nomes == NULL || strlen(nomes) == 0) {
                    printf("Nenhum nome cadastrado.\n");
                } else {
                    printf("\n--- NOMES CADASTRADOS ---\n");
                    printf("%s", nomes);
                }
                break;

            case 4:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }

    } while (op != 4);

    
    if (nomes != NULL) {
        free(nomes);
    }

    return 0;
}







        














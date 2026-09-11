#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct filme {
    char titulo[100];
    char diretor[100];
    int ano;
    float nota;
    struct filme *prox;
};

// 1. Aloca o nó cabeça e retorna o ponteiro
struct filme *cria(void);

// 2. Lê do "filmes.txt" e insere na lista ordenado alfabeticamente pelo título
void carrega(struct filme *lista);

// 3. ATENÇÃO: Imprime NA TELA (terminal) os filmes da lista (Não use fopen aqui!)
void imprime(struct filme *lista);

int main() {

    struct filme *lista;

    lista = cria();
    carrega(lista);
    imprime(lista);
    return 0;
}

struct filme *cria(void){

    struct filme *lista;

    lista = (struct filme*)malloc(sizeof(struct filme));

    lista->prox=NULL;

    return lista; 
}
void carrega(struct filme *lista){

    FILE *arq;

    arq = fopen("filmes.txt", "r");

    if(arq==NULL){
        printf("Erro ao executar o arquivo\n");
        return;
    }

    while(1){

        struct filme *novo;

        novo = malloc(sizeof(struct filme));

        if(fscanf(arq," %[^\n]", novo->titulo)==EOF){
            free(novo);
            break;
        }

        fscanf(arq, " %[^\n]", novo->diretor);
        fscanf(arq, " %d", &novo->ano);
        fscanf(arq, " %f", &novo->nota);

        novo->prox=NULL; 

        struct filme *ant, *atual; 

        ant= lista;
        atual= lista->prox; 

        while(atual != NULL && strcmp(atual->titulo, novo->titulo)<0){
            ant=atual;
            atual= atual->prox; 
        }

        novo->prox= atual;
        ant->prox=novo; 
    }
    fclose(arq);
}
void imprime(struct filme *lista){

    FILE *arq;

    arq= fopen("saidafilme.txt", "w");

    if(arq==NULL){
        printf("Erro ao executar o arquivo\n");
        return;
    }

    struct filme *atual;

    atual=lista->prox;

    while(atual != NULL){
        fprintf(arq, "%s\n %s\n %d\n %f\n", atual->titulo, atual->diretor, atual->ano, atual->nota);
        atual=atual->prox; 
    }

    fclose(arq);

}

#include<stdio.h>
#include<string.h>

struct Aluno{
    char nome[20];
    int numero_matricula;
    char curso[20];
};

    int main(){

    struct Aluno alunos[5];
    int i;

    for(i=0; i<5; i++){

        printf("----Aluno %d----\n", i+1);

        printf("Nome do aluno: ");
        scanf("%s", alunos[i].nome); 

        printf("Numero de matricula do aluno: ");
        scanf("%d", &alunos[i].numero_matricula); 

        printf("Curso do aluno: ");
        scanf("%s", alunos[i].curso); 
    }

    for(i=0; i<5; i++){

        printf("----Dados do Aluno %d----\n", i+1);

        printf("Nome do aluno: %s",alunos[i].nome );
         

        printf("Numero de matricula do aluno: %d",  alunos[i].numero_matricula);
      

        printf("Curso do aluno: %s ", alunos[i].curso);
    
    }

    return 0;


}
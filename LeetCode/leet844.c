#include<stdio.h>
#include<stdlib.h>
#include<string.h>

bool backspaceCompare(char* s, char* t) {

    int tamS = strlen(s);
    int tamT = strlen(t);

    char *pilha_s = (char*)malloc((tamS +1) * sizeof(char));
    char *pilha_t = (char*)malloc((tamT+1) * sizeof(char));

    int topo_s = -1;
    int topo_t = -1;

    for(int i=0; i< tamS; i++){

        if(s[i]!= '#'){
            topo_s++;

            pilha_s[topo_s] = s[i]; 

        }else if(topo_s >= 0){
            topo_s--; 

        }

    }
    pilha_s[topo_s+1] = '\0'; 

    for(int i=0; i<tamT; i++){
        
        if(t[i] != '#'){
            topo_t++;

            pilha_t[topo_t] = t[i];
        }else if(topo_t>=0){
            topo_t--;
        }
    }

    pilha_t[topo_t+1]= '\0';

    bool sao_iguais = (strcmp(pilha_s,pilha_t)==0);
    
    free(pilha_s);
    free(pilha_t);

    return sao_iguais; 
    
}

int main() {
    char s[] = "ab#c";
    char t[] = "ad#c";

    if (backspaceCompare(s, t)) {
        printf("As strings sao IGUAIS apos os backspaces.\n");
    } else {
        printf("As strings sao DIFERENTES.\n");
    }

    return 0;
}

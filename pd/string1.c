#include <stdio.h>
#include <string.h>

int main(){

    char s[100];
    int somador=0;

    printf("digite uma palavra:");
    scanf("%s", s);

    for(int i=0; s[i]!='\0'; i++){
        
            somador++; 
        
    }
    
    printf("a quantidade de caracteres e: %d", somador);

    return 0;





}
#include <stdio.h>
#include <string.h>

int main(){

    char s[50];
    int i; 

    printf("escreva uma palavra: ");
    scanf("%s", s);

    for( i=0; s[i]!= '\0'; i++){

    }

    for( i = i-1; i>=0; i--){
        printf("%c", s[i] ); 
    }

    return 0; 
}
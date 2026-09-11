#include <stdio.h>

int main(){

    float a[10]; 

    for(int i=0; i<10; i++){
        printf("%p\n",&a[i]);
    }
}
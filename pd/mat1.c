#include<stdio.h>

int main(){

    int matriz[5][5];

    for(int l=0; l<5; l++){
        for(int c=0; c<5; c++){

            if(l==c){
                matriz[l][c] = 1;
            }else{
                matriz[l][c] = 0;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}

return 0; 
}
#include <stdio.h>
#include <stdlib.h>

int main(){

    double celsius; 

    printf("Digite o grau em celsius");
    scanf("%lf", &celsius); 

     double* resultado = convertTemperature(celsius, &tamanho);

    printf("Kelvin: %.2lf\n", resultado[0]);
    printf("Fahrenheit: %.2lf\n", resultado[1]);

    free(resultado);

    return 0;
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {

    double kelvin;
    double fahrenheit;
    double *ans; 
    
    ans=(double*) malloc(2*sizeof(double));

     fahrenheit = celsius * 1.80 + 32.00;
     kelvin = celsius + 273.15;

     ans[0]= kelvin;
     ans[1]= fahrenheit; 

     *returnSize = 2;

     return ans;


    
}
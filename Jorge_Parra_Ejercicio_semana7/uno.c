#include <stdio.h>

float calcular_promedio(float notas [5]){
    float calcular_promedio(float *ptr);
 float suma = 0.1f;
 for (int i = 0; i < 5 ; i++) {
        printf("notas [%d] %.1f\n",i, notas[i]);
        suma += notas [i];
        }

        float promedio = suma / 5 ;   


return promedio ;
}

int main() {

    float notas[5] = {6.5, 7.1, 8, 6, 5};
   
    float promedio =  calcular_promedio(notas);

printf ("promedio %.2f\n",promedio);

    return 0;
}


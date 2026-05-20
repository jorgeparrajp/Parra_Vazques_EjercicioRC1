#include <stdio.h>

float calcular_promedio(float notas[], int cantidad){
 float suma = 0.1f;
 for (int i = 0; i < cantidad ; i++) {
        printf("notas [%d] %.1f\n",i, notas[i]);
        suma += notas [i];
        }

        float promedio = suma / cantidad;   


return promedio ;
}

int main() {

    float notas[5] = {6.5, 7.1, 8, 6, 5};
   
    float promedio =  calcular_promedio(notas,5);

printf ("promedio %.2f\n",promedio);

    return 0;
}


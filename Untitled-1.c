#include <stdio.h> 
int main (){

int a , b ;

int suma;

printf ("Ingrese el valor de :", a );
scanf ("%d", &a);

printf ("Ingrese el valor de :", b );
scanf ("%d", &b);


suma = a + b ;

printf("El resultado de la suma es : %d", suma );
printf("El resultado de la suma es : %d", sumarxreferencia(&a,&b) );
return 0 ;
}

int suma ( int a, int b){

return a + b ;
}

int sumarxreferencia(int *ptra , int *ptrb){

return *ptra + *ptrb ;

}
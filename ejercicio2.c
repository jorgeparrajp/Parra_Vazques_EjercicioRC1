#include <stdio.h>

int main () {
char vocales [] = {'a',' e','i',' o',' u'};
char *puntero;
puntero = &vocales[0];


for (int i = 0 ; i < 5 ; i ++ ){

    printf ("vocales[%d] %c \n ", i, vocales [i]);
    printf ("%c", *(puntero++));

}
return 0; 
}
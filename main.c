
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/*
 * 
 */
int main(void) {
//recorrer array y verificar que es numero.

char num[9];
//int numero;
int i;
printf("introduzca numero: \t \n ");
scanf ("\t \n %s", &num);
//atoi(num);
//numero=num;
//numval=num;
//printf("el numero introducido es %i \t\n ",numero);
    //le decimos el maximo del vector y hasta que llegue al final de la escritrura (/0) qu se situa detras del numero escrito.
for (i=0; ((i<9)&&(num[i]!='\0')); i++){ 
    printf("%c \n",num[i]);
    
}
    
    
    
    
    
    return (0);
}


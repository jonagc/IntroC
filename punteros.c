/*
Punteros

cada celda de memoria aguanta 255 bits, si se pasa de ese numero ocupa otra celda de memoria
Esta la puede guardar de forma desordenada, en donde el SO es el encargado de fragmentarla (ordenarla)
Cada celda posee direccion de memoria con notacion hexadecimal.

Un puntero es una variable que puede contener numeros, pero de numeros de direccion de memoria.




*/

#include <stdio.h>

int main(){

    int number = 109;
    int *pointToNumber = &number; //se coloca un * para señalar que es una variable de tipo int puntero

    printf("%p,  %d\n", pointToNumber, *pointToNumber); //%p es para imprimir puntero (direccion de memoria)
                                                        // %d indica que es un int
                                                        // *pointToPuntero accede al contenido de la direccion del puntero
 //Imprime la dirección de memoria que esta apuntando y el numero (%p, %d) = 0x07ffdfa4c58cc, 109
}                       
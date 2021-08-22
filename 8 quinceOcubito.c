#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Elaborar una aplicación de línea de comandos en C que permita introducir un número por teclado.
Debe contemplar estas referencias: si el número es 15 debe mostrar su nombre en letras, y si es diferente
a 15 entonces debe mostrar su potencia al cubo (^3).*/

int main()
{
    float numero;
    float *Pnumero = &numero;
    float potencia;
    float *Ppotencia = &potencia;
    printf("Ingrese su numero porfavor\n");
    scanf("%f", &numero);
    proceso(&numero, &potencia);
    return 0;
}

void proceso(float*Pnumero, float*Ppotencia){
    if(*Pnumero == 15){
        printf("el numero que ingreso es Quince\n");
    }else{
        *Ppotencia= pow(*Pnumero, 3);
        printf("La potencia al cubo de su numero es: %f\n", *Ppotencia);
    }
}

# Trabajo-de-programaci-n
Ejercicios planteados 
#include <stdio.h>
int main() {
    int numero;
    int suma;
    printf("Ingrese un numero entero de dos digitos: ");
    scanf("%d", &numero);

    
    if (numero < 10 || numero > 99) {
        printf("El numero ingresado no tiene dos digitos. Saliendo...\n");
        return 0;
    }

    int digito1 = numero / 10; // Primer dígito
    int digito2 = numero % 10; // Segundo dígito


    int inicio, fin;
    if (digito1 < digito2) {
        inicio = digito1;
        fin = digito2;
    } else {
        inicio = digito2;
        fin = digito1;
    }
    suma=inicio+fin;
    // Mostrar los enteros comprendidos entre ambos dígitos
    printf("Los enteros entre %d y %d son: %d ", inicio, fin,suma);
    for (int i = inicio + 1; i < fin; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

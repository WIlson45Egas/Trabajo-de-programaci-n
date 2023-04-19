#include <stdio.h>

int main() {
    int num;
    int suma = 0;
    int contador = 0;

    printf("Ingrese numeros, termine con 0:\n");
    while (1) {
        scanf("%d", &num);

        // Si se ingresa 0, se termina el ciclo
        if (num == 0) {
            break;
        }

        // Si el numero termina en 5, se suma a la suma total y se incrementa el contador
        if (num % 10 == 5) {
            suma += num;
            contador++;
        }
    }
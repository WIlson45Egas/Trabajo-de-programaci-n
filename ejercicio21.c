#include <stdio.h>
numero = int(input("Ingresa un número entero de dos dígitos: "))

# Validar que el número ingresado tenga dos dígitos
if numero >= 10 and numero <= 99:
    # Obtener los dígitos del número
    primer_digito = numero // 10
    segundo_digito = numero % 10

    # Calcular el rango de enteros comprendidos
    if primer_digito < segundo_digito:
        rango = list(range(primer_digito, segundo_digito + 1))
    else:
        rango = list(range(segundo_digito, primer_digito + 1))
    
    # Mostrar en pantalla los enteros comprendidos
    print("Los enteros comprendidos entre", primer_digito, "y", segundo_digito, "son:", rango)
else:
    print("El número ingresado no tiene dos dígitos.")

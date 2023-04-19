
#include <stdio.h>

int main()
{
    int numero;
   
    printf("Ingrese un numero positivo: \n");
    scanf("%d",&numero);
    if(numero>0)
    {
        for(int i=1; i<=numero;i++)
        {
            printf(" %d, ",i);
        }
    }

    return 0;
}


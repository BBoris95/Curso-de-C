#include <stdio.h>
#include <process.h>
#define tamanio 10

int main()
{
    system("cls");
    int arreglo[tamanio];
    printf("Ingrese 10 numeros enteros ");
    for (int i = 0; i < tamanio; i++)
    {
        printf("\narreglo[%d] ",i);
        scanf("%d",&arreglo[i]);
    }
    
    printf("El arreglo ingresado es: ");
    for (int j = 0; j < tamanio; j++)
    {
        printf("\narreglo[%d]=%d",j,arreglo[j]);
    }
    
    return 0;
}
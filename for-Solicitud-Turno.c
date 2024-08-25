#include <stdio.h>
#include <process.h>

int main()
{
    system("cls");
    int i, nota, sumaNotas=0, promedio;
    for (i = 1; i <= 10; i++)
    {
        printf("Ingrese la nota ");
        scanf("%d",&nota);
        sumaNotas +=nota;
    }
    promedio = sumaNotas / 10;
    printf("La suma de las notas es %d",sumaNotas);
    printf("\nEl promedio de las notas es %d",promedio);
    
    return 0;
}
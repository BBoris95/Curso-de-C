#include <stdio.h>
#include <process.h>

int main()
{
    system("cls");
    float examen1, examen2;
    printf("Ingrese la nota del primer examen ");
    scanf("%f",&examen1);
    printf("Ingrese la nota del segundo examen ");
    scanf("%f",&examen2);
    float notafinal;
    notafinal = (examen1 + examen2) /2 ;
    printf("El primer examen es %.2f",examen1);
    printf("\nEl segundo examen es %.2f",examen2);
    printf("\nLa nota final es %.2f",notafinal);
    return 0;
}

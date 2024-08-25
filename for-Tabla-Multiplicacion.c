#include <stdio.h>
#include <process.h>

int main()
{
    system("cls");
    int tabla, i, resultado;
    printf("Ingrese la tabla ");
    scanf("%d",&tabla);
    for (i = 1; i <=12; i++)
    {
        resultado= tabla*i;
        printf("\n%d * %d = %d",tabla,i,resultado);
    }
    
    return 0;
}
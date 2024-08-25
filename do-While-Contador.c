#include <stdio.h>
#include <process.h>

int main()
{
    system("cls");
    int contador = 0;
    do
    {
        contador++;
    } while (contador<10);
    printf("Contador = %d", contador);
    
    return 0;
}
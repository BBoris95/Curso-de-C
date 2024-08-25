#include <stdio.h>
#include <process.h>

int main(){
    system("cls");
    int numero;
    printf("Ingrese un numero ");
    scanf("%d",&numero);
    if ((numero%2) == 0)
    {
        printf("El numero es par\n");
    }
    else
    {
        printf("El numero es impar\n");
    }
    system("pause");
    return 0;
}
#include <stdio.h>
#include <process.h>


int main(){
    system("cls");
    int edad;
    printf("Ingrese su edad ");
    scanf("%d",&edad);
    if (edad>=18)
    {
        printf("Es mayor de edad\n");
    }
    else
    {
        printf("Es menor de edad\n");
    }   

    system("Pause");
    return 0;
}
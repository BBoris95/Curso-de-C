#include <stdio.h>
#include <process.h>

int main(){
    system("cls");
    int dia;
    printf("Ingrese un numero ");
    scanf("%d",&dia);
    switch (dia)
    {
    case 1:
        printf("Hoy es el dia Lunes");
        break;
    case 2:
        printf("Hoy es el dia Martes");
        break;
    case 3:
        printf("Hoy es el dia Miercoles");
        break;
    default:
        printf("No es nigun dia");
        break;
    }
  
    return 0;
}
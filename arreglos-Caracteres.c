#include <stdio.h>
#include <process.h>
#define num 15

int main()
{
    system("cls");
    char apellido[num] ={'L','o','p','e','z','\0'};
    char nombre[num] = "Juan";
    
    printf("%s\n", apellido);
    printf("%s\n", nombre);
    return 0;
}
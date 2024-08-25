#include <stdio.h>
#include <process.h>

int main(){
    system("cls");
    char letra;
    printf("Ingrese una letra ");
    scanf("%c",&letra);
    switch (letra)
    {
    case 'a':
        printf("Es una vocal");
        break;
    case 'e':
        printf("Es una vocal");
        break;
    case 'i':
        printf("Es una vocal");
        break;
    case 'o':
        printf("Es una vocal");
        break;
    case 'u':
        printf("Es una vocal");
        break;
    default:
        printf("Es una consonate");
        break;
    }
}
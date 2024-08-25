#include <stdio.h>
#include <process.h>

int main()
{
    system("cls");
    float peso, altura, imc;
    printf("Ingrese su peso ");
    scanf("%f",&peso);
    printf("Ingrese su altura ");
    scanf("%f",&altura);
     
    imc = peso / (altura* altura);

    if (imc<18.5)
    {
        printf("El peso por debajo de lo normal");
    }
    else if (imc>=18.5 && imc<25)
    {
        printf("Peso saludable");
    }
    else if (imc>25 && imc<30)
    {
        printf("Tiene sobrepeso");
    }
    else if (imc>=30)
    {
        printf("Tiene obesidad");
    }
    
    printf("\nSu IMC es %.2f",imc);
    return 0;
}
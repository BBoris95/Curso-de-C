#include <stdio.h>

float calculador(int num1, int num2, char operacion);

int main()
{
    char operacion;
    int num1, num2;
    printf("Que operacion desea realizar(+ - * /) ");
    scanf("%c",&operacion);

    printf("Ingrese el primer numero ");
    scanf("%d",&num1);

    printf("Ingrese el segundo numero ");
    scanf("%d",&num2);

    printf("%d %c %d = %.2f", num1, operacion, num2, calculador(num1,num2, operacion));

    return 0;
}


float calculador(int num1, int num2, char operacion)
{
    float calculo;
    switch (operacion)
    {
    case '+':
        calculo= num1 +  num2;
        break;
    case '-':
        calculo= num1 -  num2;
        break;
    case '*':
        calculo= num1 *  num2;
        break;
    case '/':
        calculo= num1 / num2;
        break;
    default:
        break;
    }

    return calculo;
}
    

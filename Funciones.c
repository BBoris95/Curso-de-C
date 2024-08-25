#include <stdio.h>


int areaTriangulo(int base, int altura);


int main()
{
    int base, altura,area;
    printf("Ingrese base ");
    scanf("%d",&base);
    printf("Ingrese altura ");
    scanf("%d",&altura);

    area = areaTriangulo(base,altura);
    printf("El area del triangulo es: %d", area);
    return 0;
}

int areaTriangulo(int base, int altura)
{
    int area;
    area = (base * altura) /2;
    return area;
}
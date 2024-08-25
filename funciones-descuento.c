#include <stdio.h>

float cacularDecuento(float compra, int descuento);
int main()
{
    float compra,total;
    int descuento;
    printf("Ingrese el valor de su compra ");
    scanf("%f",&compra);
    printf("Ingrese el valor de descuento ");
    scanf("%d",&descuento);
    
    total= cacularDecuento(compra,descuento);
    printf("El total de la compra es %.2f",total);
    return 0;
}

float cacularDecuento(float compra, int descuento)
{
    float total;
    total= compra - (compra*descuento)/100;
    return total;
    
}
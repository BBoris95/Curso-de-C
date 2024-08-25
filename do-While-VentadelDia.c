#include <stdio.h>
#include <process.h>

int main()
{
    system("cls");
    float venta,ventaTotal=0;
    do
    {
        printf("Ingrese la venta del cliente ");
        scanf("%f",&venta);
        ventaTotal+=venta;
    } while (venta!=0);

    printf("La ventat total del dia es %.2f", ventaTotal);
    
    return 0;
}
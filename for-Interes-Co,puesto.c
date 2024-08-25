#include <stdio.h>
#include <process.h>

int main()
{
    system("cls");
    double dineroActual, adicionAnual, interesAnual;
    int anios = 0;

    printf("Ingrese el dinero actual de la inversion ");
    scanf("%lf",&dineroActual);

    printf("Ingrese el dinero que va agregar anualmente ");
    scanf("%lf",&adicionAnual);
    
    printf("Ingrese la cantidad de anios de inversion ");
    scanf("%d",&anios);

    printf("Ingrese el porcetanje de interes anual ");
    scanf("%lf",&interesAnual);

    double total = dineroActual;

    for (int i = 0; i < anios; i++)
    {
        total +=1000;
        total = total + (interesAnual*total/100);
    }
    
    printf("En 10 anios tendras %.2lf",total);

    return 0;
}

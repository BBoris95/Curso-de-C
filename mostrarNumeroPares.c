#include <stdio.h>
#include <process.h>

int main()
{
    system("cls");

    for (int i = 1; i <= 100; i++)
    {
        if ((i%2)==0)
        {
            printf("\n%d", i);
        }
        
    }
    
    return 0;
}
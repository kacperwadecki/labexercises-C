#include <stdio.h>
#include <stdlib.h>

int main()
{
    float suma = 0;
    float result = 1;
    float maxresult = 0;
    int liczba = 0;

    for(int i = 1; i<=100; i++)
    {
        for(int j = 1; j<i; j++)
        {
            if(i % j == 0)
            {
                suma += j;
            }
        }
        result = suma/i;

        suma = 0;

        if(result > maxresult)
        {
            maxresult = result;
            liczba = i;
        }
    }

    printf(" Wartosc ilorazu: %f \n", maxresult);
    printf("Liczba: %d", liczba);
}

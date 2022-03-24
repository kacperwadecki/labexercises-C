#include <stdio.h>
#include <stdlib.h>

void unikalnosc(unsigned int n, int * tab)
{
    int tabtmp[n];
    int flaga = 0;
    int counter = 0;

    for(int i=0; i<n; i++)
    {
        flaga = 0;
        for(int j=0; j<n; j++)
        {
            if(tab[i] == tabtmp[j])
            {
                flaga = 1;
            }
        }
        if(flaga == 0)
        {
            printf("%d, ", tab[i]);
            tabtmp[counter] = tab[i];
            counter++;
        }
    }
}
int main()
{
    int tab[] = {7,4,6,7,5,5,8,6,7};

    unikalnosc(9,tab);
}

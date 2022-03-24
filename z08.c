#include <stdio.h>
#include <stdlib.h>

int minimum(unsigned int n, int * tab)
{
    int min = tab[0];
    int counter = 0;
    int result = 0;

    for(int i=0; i<n; i++)
    {
        if(tab[i]<min)
        {
            min = tab[i];
        }
    }

    for(int i = 0; i<n; i++)
    {
        if(tab[i] == min)
        {
            counter++;
            result = i;
        }
        if(counter > 1)
        {
            return i;
        }
    }

    return result;

}

int main()
{
    int tab[] = {6,1,8,1,9,1,2,5,7,2,6,8,2,2};
    printf("%d", minimum(11, tab));
}

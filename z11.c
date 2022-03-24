#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int** alokuj(unsigned int n)
{
    int **t=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        t[i]=malloc((i+1)*sizeof(int));
    }
    return t;
}

int srednia(int** tab, unsigned int n)
{
    float max = 0;
    int maxind = 0;
    float suma = 1;
    float result = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            suma *= tab[j][i];
        }
        result = pow(suma, 1/(double)(n-i));

        if(result>max)
        {
            max = result;
            result=0;
            maxind = i;
        }
        suma=1;
    }

    return maxind;
}

int main()
{
    int** tab=alokuj(4);

    tab[0][0] = 4;
    tab[1][0] = 2;
    tab[1][1] = 3;
    tab[2][0] = 1;
    tab[2][1] = 9;
    tab[2][2] = 8;
    tab[3][0] = 2;
    tab[3][1] = 1;
    tab[3][2] = 2;
    tab[3][3] = 3;

    printf("%d",srednia(tab,4));
}

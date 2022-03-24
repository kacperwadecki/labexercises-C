#include <stdio.h>
#include <stdlib.h>

int licz = 0;

void wyswietl(int x)
{
    if(x == 1)
    {
        printf("%d, ", x);
        return 0;
    }

    if(x % 2 == 0)
    {
        printf("%d, ", x);
        x/=2;
        wyswietl(x);
    }
    else
    {
        printf("%d, ", x);
        x += 1;
        wyswietl(x);
    }
}

int rekurencja(unsigned int n, unsigned int x)
{
    if(licz==0){
        wyswietl(x);
        licz++;
    }
    if(n == 1)
    {
        return x;
    }
    if(x == 1)
    {
        return 1;
    }

    if(x % 2 == 0)
    {
        x/=2;
        if(n == 2) return x;
        rekurencja(n-1, x);
    }
    else
    {
        x += 1;
        if(n == 2) return x;
        rekurencja(n-1, x);
    }
}

int main()
{
    printf("result: %d  ", rekurencja(7,10));
    printf("result: %d  ", rekurencja(1,10));
    printf("result: %d  ", rekurencja(3,10));
}

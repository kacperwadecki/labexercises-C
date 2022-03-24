#include <stdio.h>
#include <stdlib.h>

int *srodkowa(int *x, int *y, int *z)
{
    if(*x == *y && *y == *z)
        return z;

    if(*x != *y && *y != *z)
    {
        if(*x > *y && *x < *z) return x;
        else if(*y > *x && *y < *z) return y;
        else if(*z > *x && *z < *y) return z;

        else if(*x < *y && *x > *z) return x;
        else if(*y < *x && *y > *z) return y;
        else if(*z < *x && *z > *y) return z;
    }

    if(*x == *y)return z;
    if(*x == *z)return y;
    if(*y == *z)return x;
}

int main()
{
    int liczba1 = 8;
    int liczba2 = 5;
    int liczba3 = 6;

    int *wsk1 = &liczba1;
    int *wsk2 = &liczba2;
    int *wsk3 = &liczba3;

    printf("%d \n", *srodkowa(wsk1,wsk2,wsk3));
    printf("%p", srodkowa(wsk1,wsk2,wsk3));

}

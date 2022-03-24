#include <stdio.h>
#include <stdlib.h>

struct wspolczynniki
{
    double a, b, c;
};

int ileRozwiazan(struct wspolczynniki wsp)
{
    if(wsp.a!=0)
    {
        double delta = wsp.b * wsp.b - 4 * wsp.a * wsp.c;

        if(delta>0) return 2;
        else if(delta==0) return 1;
        else return 0;
    }
    else
    {
        printf("Nie jest to rownanie kwadratowe");
        return 0;
    }
}

int main()
{
    struct wspolczynniki wsp;
    wsp.a = 1;
    wsp.b = 4;
    wsp.c = 4;

    printf("%d", ileRozwiazan(wsp));
}

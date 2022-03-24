#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, w;

    scanf("%d %d %d %d", &x, &y, &z, &w);

    if(x == y && y == z && z == w)printf("kareta");
    else if((x == y && y == z) || (x == z && z == w) || (x == y && y == w) || (y == z && z == w)) printf("trojka");
    else if((x == y && z == w) || (x == w && z == y) || (x == z && y == w))printf("dwie pary");
    else if(x != y && x != z && x != w && y != z && y != w && z != w)printf("nic");
    else if(x == y || x == z || x == w || y == z || y == w || z == w)printf("para");
}

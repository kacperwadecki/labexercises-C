#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int fun1(unsigned int x)
{
    return x;
}

int fun2(unsigned int y)
{
    return 25;
}

bool fun3(unsigned int n, int (*fun1)(unsigned int), int (*fun2)(unsigned int))
{
    if(fun1(n) * fun1(n) == fun2(n)) return true;
    return false;
}

int main()
{
    int (*wskf1)(unsigned int);
    int (*wskf2)(unsigned int);

    wskf1 = fun1;
    wskf2 = fun2;

    printf("%d \n", fun3(3,wskf1,wskf2));
    printf("%d \n", fun3(5,wskf1,wskf2));
}

#include <stdio.h>
#include <stdlib.h>

int cyfrawybrana(unsigned int n,unsigned int k)
{
    int tmp1 = 9;
    int tmp2 = 1;
    int counter = 0;

        for (int j = 1; j <= k - 1; j++)
        {
            tmp2 *= 10;
            tmp1 += (9 * tmp2);
        }

        if(n * 10 < tmp1) return 0;


        while(n > tmp1)
        {
            n /= 10;
        }

    return n%10;
}

int main()
{
    printf("%d \n", cyfrawybrana(942140, 3));
    printf("%d \n", cyfrawybrana(42340, 1));
    printf("%d \n", cyfrawybrana(94140, 3));
}

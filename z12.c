#include <stdio.h>
#include <stdlib.h>

void wypisz2(unsigned int n,unsigned int m, int t[][m])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
    {
           printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
}


void zamien(unsigned int n, unsigned m, int tab[][m])
{
    int tmp1 = 0;
    int tmp2 = 0;

    int w = 0;
    int k = 0;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(tab[j][i]%2 != 0)
            {
                tmp2 += 1;
                if(tmp2==1)
                {
                    tmp1 = tab[j][i];
                    w=j;
                    k=i;
                }
            }
            if(tmp2==2)
            {
                tab[w][k] = tab[j][i];
                tab[j][i]=tmp1;
                tmp2=0;
            }
        }
    }
}

int main()
{
    int tab[3][4] = {{3,8,7,2},{7,5,6,1},{6,2,3,9}};
    wypisz2(3,4,tab);
    zamien(3,4,tab);
    wypisz2(3,4,tab);
}

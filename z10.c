#include <stdio.h>
#include <stdlib.h>

int dlugosc(char* napis1)
{
    int i = 0;

    while(napis1[i]!=0)
    {
        i++;
    }
    return i;
}

void ileRazy(char* napis1)
{

    for(int i=0; napis1[i]!=0; i++)
    {
        if(napis1[i]>='a'&& napis1[i]<='z')
        {
            napis1[i]=napis1[i]+'A'-'a';
        }
    }

    int max = 0;
    int tmp1 = 0;
    char tmp2 = "";

    for(int i=0; i<dlugosc(napis1); i++)
    {
        for(int j=0; j<dlugosc(napis1); j++)
        {
            if(napis1[i]==napis1[j])
            {
                tmp1++;
            }
        }
        if(tmp1>max)
        {
            max=tmp1;
            tmp2=napis1[i];
        }

            tmp1=0;
    }

    printf("Najczesciej to char %c/%c tyle razy %d", tmp2,tmp2+32, max);
}

int main()
{
    char napis1[15] = "AaAvcAa xzcaA";
    ileRazy(napis1);
}

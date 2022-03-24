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

int przelicz(char* napis1, char* napis2)
{
    int wynik = 0;
    int tmp1 = 0;
    for(int i=0; i<dlugosc(napis2)-1; i++)
    {
        if(napis1[0]==napis2[i])
        {
            for(int j=0; j<dlugosc(napis1); j++)
            {
                if(napis1[j]==napis2[i+j]) tmp1++;
            }

            if(tmp1==dlugosc(napis1))
            {
                wynik++;
                i+=1;
            }
            tmp1=0;

        }
    }

    return wynik;
}

int main()
{
    char* napis1 = "ma";
    char* napis2 = "mama ma mala marynarke";

    printf("%d", przelicz(napis1,napis2));
}

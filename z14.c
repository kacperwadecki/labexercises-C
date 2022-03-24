#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element* next;
};

struct element* utworz()
{
    return NULL;
}

void wypisz(struct element* Lista)
{
    Lista = Lista->next;
    while (Lista != NULL)
    {
        printf("%d\n", Lista->i);
        Lista = Lista->next;
    }
    printf("\n");
}

struct element* dodajnakoniec(struct element* Lista, int x)
{
    struct element* wsk;
    if (Lista == NULL)
    {
        Lista = malloc(sizeof(struct element));
        Lista->next = malloc(sizeof(struct element));
        Lista->next->i = x;
        Lista->next->next = NULL;
        return Lista;
    }
    else
    {
        wsk = Lista;
        while (wsk->next != NULL)
        {
            wsk = wsk->next;
        }
        wsk->next = malloc(sizeof(struct element));
        wsk = wsk->next;

    }

    wsk->i = x;
    wsk->next = NULL;
    return Lista;
}

struct element* segreguj(struct element* Lista)
{
    struct element* result = Lista, *wsk2;
    Lista = Lista->next;
    for (int i = 0; Lista->next != NULL; i++)
    {
        if (i%2==0)
        {
            wsk2 = Lista->next;
            Lista->next = wsk2->next;
            free(wsk2);

        }
        else
        {
            Lista = Lista->next;
        }

    }
    return result;
}

int main()
{
    struct element* lista = utworz();

    lista = dodajnakoniec(lista, 1);
    lista = dodajnakoniec(lista, 2);
    lista = dodajnakoniec(lista, 3);
    lista = dodajnakoniec(lista, 4);
    lista = dodajnakoniec(lista, 5);
    lista = dodajnakoniec(lista, 6);
    lista = dodajnakoniec(lista, 7);
    lista = dodajnakoniec(lista, 8);

    segreguj(lista);
    wypisz(lista);

    return 0;
}

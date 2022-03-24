#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

struct element *utworz()
{
    return NULL;
};

struct element * dodajnapoczatek(struct element* Lista, int a)
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista;
    return wsk;
}

void wypisz(struct element * Lista)
{
    while(Lista!=NULL)
    {
        printf("%p\n",Lista);
        Lista=Lista->next;
    }
    printf("\n");
}

int main()
{
    struct element* lista=utworz();
    lista = dodajnapoczatek(lista,5);
    lista = dodajnapoczatek(lista,3);
    lista = dodajnapoczatek(lista,2);
    lista = dodajnapoczatek(lista,6);
    lista = dodajnapoczatek(lista,7);

    wypisz(lista);
}

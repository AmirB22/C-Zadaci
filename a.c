// Predmet: Osnovi Programiranja – Programski jezik C
//
// Primer: Korisnik unosi niz, program sortira niz po rastućem redosledu,
// zatim ga ispisuje.
///////////////////////////////////////////////////////

#include <stdio.h>

// Prototipovi funkcija
void pisiNiz(int x[], int n);
void citajNiz(int x[], int n);
void razmeni(int *a, int *b);
void sortiraj(int *a, int n);

int main()
{
    int n, x[50];
    printf("Unesite broj elemenata niza za sortiranje:\n");
    scanf("%d", &n);

    // Unos elemenata niza
    printf("Unesite elemente niza:\n");
    // Funkcija za unos elemenata niza
    citajNiz(x, n);

    // Funkcija za sortiranje niza
    sortiraj(x, n);
    
    // Ispisivanje sortiranog niza
    printf("Sortirani niz je:\n");
    pisiNiz(x, n);

    return 0;
}

void citajNiz(int x[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("x[%d] = ", i);
        scanf("%d", &x[i]);
    }
}

void pisiNiz(int x[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
}

void razmeni(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortiraj(int *a, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(a + i) > *(a + j))
                razmeni(a + i, a + j);
        }
    }
}
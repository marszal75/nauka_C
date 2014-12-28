//Program zliczający największą wartość w tablicy

#include <stdio.h>
#define rozm 10
int tab[rozm];
int licznik;
int maksimum(int x[], int y);

int main()
{
    for (licznik = 0; licznik < rozm; licznik++)
    {
        printf("wprowadź wartości tablicy: ");
        scanf("%d", &tab[licznik]);
    }
    for (licznik = 0; licznik < rozm; licznik++)
    {
        printf("%d, ", tab[licznik]);
    }
    printf("\nNajwiększa wartość to: %d", maksimum(tab, rozm));
    return 0;
}
int maksimum( int x[], int y )
{
    int licz;
    int maksim = 0;
    for (licz = 0; licz < y; licz++)
    {
        if (x[licz] > maksim)
            maksim = x[licz];
    }
    return maksim;
}
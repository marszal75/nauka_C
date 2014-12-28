//Tabela wielowymiarowa
#include <stdio.h>
float Tablica[4][5];
int licz1, licz2;
int main()
{
    for (licz1 = 0; licz1 < 4; licz1++)
    {
        for (licz2 = 0; licz2 < 5; licz2++)
        {
            printf("\n\n Wpisz srednią ocen %d-tego ucznia %d-tej klasy: ", licz1+1, licz2+1);
            scanf("%f", &Tablica[licz1][licz2]);
        }    
    }
for (licz1 = 0; licz1 < 4; licz1++)
{
    for (licz2 = 0; licz2 < 5; licz2++)
    {
        printf("średnia ocen %d-ego ucznia %d-tej klasy wynosi: %.2f\n", licz1+1, licz2+1, Tablica[licz1][licz2]);
    }
}    
            return 0;
}
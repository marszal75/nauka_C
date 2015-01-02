//Program zliczający dwie tablice o tym samym rozmiarze

#include <stdio.h>
#define rozm 5
int i, Tab1[rozm], Tab2[rozm];
int suma1, suma2, sumasum;
int main()
{
    // Tablica 1
    for (i=0; i<rozm; i++)
    {
        printf("Podaj wartości tablicy: \n");
        scanf("%d", &Tab1[i]);
        suma1 += Tab1[i];
    }
    printf("Wartości tablicy to: ");
    for (i=0; i<rozm; i++)
    
        printf(" %d,", Tab1[i]);
    
    printf("\n");
    // Tablica 2
    for (i=0; i<rozm; i++)
    {
        printf("Podaj wartości drugiej tablicy: \n");
        scanf("%d", &Tab2[i]);
        suma2 += Tab2[i];
    }
    printf("Wartości drugiej tablicy to: ");
    for (i=0; i<rozm; i++)
    
        printf(" %d,", Tab2[i]);
    
    printf("\n");
    printf("suma elementów tablicy 1 = %d\n", suma1);
    printf("suma elementów tablicy 2 = %d\n", suma2);
    sumasum = suma1 + suma2;
    printf(" Suma sum = %d", sumasum);
    return 0;
        
    
}
#include <stdio.h>
int Ola;
int *Zbych;

int main()
{
    Ola = 180;
    Zbych = &Ola;
    printf("Wzrost Oli: %d\n", Ola);
    printf("Wzrost Oli wg Zbycha: %d\n", *Zbych);
    printf("Adres Oli: %p\n", &Ola);
    printf("Adres Oli wg Zbycha: %p\n", Zbych);
    return 0;
}
//porównanie dwóch łańcuchów znaków
#include <stdio.h>
#include <stdlib.h>

char bufor1[100], bufor2[100];
char *funkcja(char x[], char y[]);
int main()
{
    puts("wpisz pierwszy tekst: ");
    gets(bufor1);
    puts("wpisz drugi tekst: ");
    gets(bufor2);
    printf("Dłuższy łańcuch znaków to: %s\n",funkcja(bufor1, bufor2));
    return 0;
}
char *funkcja(char x[], char y[])
{
    size_t a, b;
    a = strlen(x);
    b = strlen(y);
    if(a > b )
        return x;
    else
        return y;
}

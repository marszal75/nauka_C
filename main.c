// Program ze wskaźnikami na tablicę

#include <stdio.h>
int Ola;
int *Zbych;

int main()
{
    Ola = 180;
    Zbych = &Ola;
    
    printf("normalna  OLA to %d\n",Ola);
    printf("nienormalna OLA to %d\n",*Zbych);
        printf("normalna  OLA to %d\n",&Ola);
    printf("nienormalna OLA to %d\n",Zbych);
    
    return 0;
}
#include <stdio.h>

int Tablica[2][12] = {{31,29,31,30,31,30,31,31,30,31,30,31}, {31,28,31,30,31,30,31,31,30,31,30,31}};
int a, b;

int main()
{
  for (a=0; a<2; a++)
  {
      for (b=0; b<12; b++)
      { 
          if (a==0)
          {
             printf("Miesiąc %d, roku przestępnego ma %d dni\n", b+1, Tablica[a][b] ); 
          }
          else
          {
             printf("Miesiąc %d, roku nieprzestępnego ma %d dni\n", b+1, Tablica[a][b] ); 
          }
      }
  }
}
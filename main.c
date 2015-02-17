#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>


int i, j, m, n, id;
double wynik, moj_wynik;

int main( int argc, char **argv)
{
    printf("podaj dwa argumenty określające wymiary macierzy\n");
    
    scanf("%d",&n);
    scanf("%d",&m);
    double tablica[n][m];
    printf("\n\nTwoja tablica ma wymiary: %d na %d\n\n", n, m);
    
    srand(time(0));
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            tablica[i][j]=rand() % 10;
        }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("tablica [%d][%d] = %0.0f\t",i,j,tablica[i][j]);
            printf("\t");
        }
        printf("\n");
    }
      printf("NOWA TABLICA TO: \n");  
    omp_set_num_threads(n);
#pragma omp parallel shared(wynik) private(id, moj_wynik)

    {
        id = omp_get_thread_num();
        moj_wynik=0;
        for(i=0; i<m; i++)
        {
            moj_wynik+=tablica[id][i];
        }
        printf("\twątek %d %0.0f\t",id+1,moj_wynik);
#pragma omp critical
       wynik+=moj_wynik;
    }
    printf("\nwynik to: %0.0f\n",wynik);
    return 0;
}
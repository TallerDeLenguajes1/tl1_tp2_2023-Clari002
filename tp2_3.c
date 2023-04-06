#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5 //filas
#define M 7 //columnas

int main()
{
    srand(time(NULL));
     int i,j;
    
    int ** mt = (int **)malloc(sizeof(int *)*N);
   

    for(i = 0;i<N; i++)
    {
        mt[i] =(int *)malloc(sizeof(int)*M);

        for(j = 0;j<M; j++)
        {
            mt[i][j]=1+rand()%100;
            printf("%4d ", mt[i][j]);
        }
        printf("\n");
    }

return 0;
    
}

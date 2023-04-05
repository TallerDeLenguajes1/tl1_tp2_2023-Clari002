#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
//aplicando aritmetica de punteros
int main()
{
    srand((unsigned)time(NULL));
    int i;
    double vt[N], *punt;//declaracion
    punt=&vt[0];//asignacion

     printf("[ ");
    for(i = 0;i<N; i++)
    {
        *punt=1+rand()%100;
        printf("%.2f ", ++(*punt));
    }
    printf("]");


    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct compu
{
   int velocidad;//entre 1 y 3 GHz
   int anio;//entre 2015 y 2023
   int cantidad;//entre 1 y 8
   char *tipo_cpu;//valores del arreglo tipos
};

//funciones
void mostrar(struct compu PC[5]);
void PcVieja(struct compu PC[5]);
void PcMasVelocidad(struct compu PC[5]);

int main()
{
    srand(time(NULL));
    char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};
    struct compu PC[5];
    int i, cant;
    for (i = 0; i < 5; i++)
    {   
        PC[i].velocidad= 1+rand()%3;
        PC[i].anio =2015+rand()%(2024-2015);
        PC[i].cantidad =1 + rand()%8;
        PC[i].tipo_cpu = tipos[(0+rand()%5)];
        

    }

    printf("---------------LISTA DE PC-----------------");
    mostrar(PC);
    PcVieja(PC);
    PcMasVelocidad(PC);
    
    
    
    return 0;
}

void mostrar(struct compu PC[5]){
    int i, aux=1;
    for (i = 0; i < 5; i++)
    {
        printf("\n_____________________________");
        printf("\nPC N%d",aux);
        printf("\nVelocidad: %d GHz",PC[i].velocidad);
        printf("\nA%cio: %d", 164, PC[i].anio);
        printf("\nTipo de CPU: %s",PC[i].tipo_cpu);
        printf("\nCantidad: %d\n", PC[i].cantidad);
        aux++;
    }
    


}

void PcVieja(struct compu PC[5]){
    int i, aux=1,aux2=0, valor=2015;
    char tipo;
    int *pVel;
   
    
    for (i = 0; i < 5; i++)
    {
       
        if (PC[i].anio <= valor)
        {
            valor = PC[i].anio;
            pVel = &PC[i].velocidad;
           // tipo = PC[i].tipo_cpu;
           // cant = PC[i].cantidad;
           
            aux2=aux;
        }
         aux++;
    }    
        printf("\n\n_______________PC MAS VIEJA________________");
               fflush(stdin);
        printf("\nPC N%d",aux2);
        fflush(stdin);
        printf("\nVelocidad: %d GHz", *pVel);
               fflush(stdin);
        printf("\nA%cio: %d", 164, valor);
//        printf("\nTipo de CPU: %s",tipo);
      //  printf("\nCantidad: %d", cant);

}

void PcMasVelocidad(struct compu PC[5]){
    int i, valor=1, aux=1, aux2=0;
    for ( i = 0; i < 5; i++)
    {
        if (PC[i].velocidad>=valor)
        {
            valor=PC[i].velocidad;
            aux2=aux;
        }
        aux++;
    }
    printf("\n\n_____________PC mas veloz_____________________");
           fflush(stdin);
    printf("\nPC N%d", aux2);
           fflush(stdin);
    printf("\nVelocidad: %d GHz", valor);
    

}
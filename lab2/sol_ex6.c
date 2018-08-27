#include <stdio.h>
#include <stdlib.h>

int calcularMediana(int *x);
void qs(int lista[],int limite_izq,int limite_der);
void quicksort(int lista[],int n);


int main()
{
    int x[5] = {3,2,6,1,19};
    quicksort(x,5);
    int mediana = calcularMediana(x);
    printf("%d",mediana);
    return 0;
}

void qs(int lista[],int limite_izq,int limite_der)
{
    int izq,der,temporal,pivote;
    izq=limite_izq;
    der = limite_der;
    pivote = lista[(izq+der)/2];
    do{
        while(lista[izq]<pivote && izq<limite_der)izq++;
        while(pivote<lista[der] && der > limite_izq)der--;
        if(izq <=der)
        {
            temporal= lista[izq];
            lista[izq]=lista[der];
            lista[der]=temporal;
            izq++;
            der--;
        }
    }while(izq<=der);
    if(limite_izq<der){qs(lista,limite_izq,der);}
    if(limite_der>izq){qs(lista,izq,limite_der);}
}
 
void quicksort(int lista[],int n)
{
    qs(lista,0,n-1);
}

int calcularMediana(int *array) {
  return *(array + ((sizeof(array-1)/2)+1));
}
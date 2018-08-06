#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void progresion(int x, int n);

int main(){
    int x, n;
    printf("Programa para realizar una progresion geometrica\n");
    printf("Ingrese razon:");
    scanf("%d",&x);
    printf("Ingrese tamano:");
    scanf("%d",&n);
    progresion(x,n);
    return 0;
}

void progresion(int x, int n){
    int result = 0;
    int i;
    for(i=0; i<=n;i++){
        result = result + pow(x,i);
    }
    printf("La suma de la progresion es:%d",result);
}
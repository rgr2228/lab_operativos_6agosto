#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int reversa(int x);

int main(){
    int x;
    printf("Programa para revertir los digitos de un numero\n");
    printf("Ingrese el numero a revertir:");
    scanf("%d",&x);
    int resp = reversa(x);
    return resp;
}

int reversa(int x){
    int resp = 0;
    while (x != 0)
    {
        resp = resp * 10;
        resp = resp + x%10;
        x = x/10;
    }
    printf("El numero invertido es:%d",resp);
    return resp;
}


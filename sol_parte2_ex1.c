#include <stdio.h>
#include <stdlib.h>

int multiplo(int ent1, int ent2);

int main()
{
    int ent1,ent2;
    printf("Programa para saber si el numero 2 es multiplo de numero 1\n");
    printf("Ingrese el numero1:");
    scanf("%d",&ent1);
    printf("Ingrese el numero2:");
    scanf("%d",&ent2);
    return multiplo(ent1,ent2);
}

int multiplo(int ent1, int ent2){
    if(ent2%ent1 == 0){
        printf("Es multiplo");
        return 1;
    }
    else{
        printf("No es multiplo");
        return 0;
    }
}
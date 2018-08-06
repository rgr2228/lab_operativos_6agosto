#include <stdio.h>
#include <stdlib.h>

void multiplicar();

int main(){
    int resp=1;
    printf("Bienvenido al programa de aprender a multiplicar\n");
    while(resp!=0){
        printf("Digite 1 para continuar 0 para salir:");
        scanf("%d",&resp);
        switch(resp){
            case 1:
            multiplicar();
            break;
            case 0:
            printf("Vuelve pronto!");
            break;
        }
    }
    return 0;
}

void multiplicar(){
    int resp = 0;
    int ent1 = rand()%10;
    int ent2 = rand()%10;
    int correcta = ent1*ent2;
    while(resp!=correcta){
        printf("Cuanto es %d veces %d?:",ent1,ent2);
        scanf("%d",&resp);
        if(resp==correcta){
            printf("Muy bien!\n");
        }
        else{
            printf("No. Por favor intenta nuevamente\n");
        }
    }
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lanzar(int lanzamientos);

int main(){
    int lanzamientos;
    printf("Simulador de lanzamiento de monedas\n");
    printf("Ingrese el numero de lanzamientos:");
    scanf("%d",&lanzamientos);
    lanzar(lanzamientos);
    return 0;
}

void lanzar(int lanzamientos){
    int random;
    int i,cara = 0,sello =0;
    for(i=0;i<lanzamientos;i++){
        //srand(time(NULL));
        random = rand()%2; 
        if(random==0){
            printf("C");
            cara++;
        }
        else{
            printf("S");
            sello++;
        }
    }
    printf(", # de caras = %d, # de sellos = %d",cara,sello);
}
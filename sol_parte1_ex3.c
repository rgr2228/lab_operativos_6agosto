#include <stdio.h>
#include <stdlib.h>

void secuencia(int renglones);

int main()
{
    int n;
    printf("Programa para escribir secuencias\n");
    printf("Ingrese numero renglones:");
    scanf("%d",&n);
    secuencia(n);
    return 0;
}

void secuencia(int renglones){
    int sec[renglones];
    int i,j;
    for(i=(renglones-1);i>=0;i--){
        j = i;
        if(sec[i+1]==1){
            sec[i]=0;
        }
        else{
            sec[i]=1;
        }
        while(j<=renglones-1){
            printf("%d",sec[j]);
            j++;
        }
        printf("\n");
    }
}
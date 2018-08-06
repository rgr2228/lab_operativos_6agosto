#include <stdio.h>
#include <stdlib.h>

void multiplicar(int n);

int main()
{
    int n;
    printf("Ingrese numero hasta el cual desea conocer las tablas de multiplicar:");
    scanf("%d",&n);
    multiplicar(n);
    return 0;
}

void multiplicar(int n){
    int i,j, res;
    for(i=1;i<=n;i++){
        for(j=1;j<=10;j++){
            res = i*j;
            printf("%dx%d = %d\n",i,j,res);
        }
    }
}
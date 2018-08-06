#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float series(int x, int n);
int factorial(int n);

int main(){
    int x, n;
    printf("Programa para para encontrar la suma de las series\n");
    printf("Valor de entrada de x:");
    scanf("%d",&x);
    printf("Numero de terminos:");
    scanf("%d",&n);
    float resp = series(x,n);
    printf("Suma:%f",resp);
    return resp;
}

float series(int x, int n){
    float resp = 0; 
    int i = 0;
    int bool = 0;
    while(i<n){
        if(bool == 0){
            resp = resp + ((pow(x,i+i))/(factorial(i+i)));
            bool = 1;
        }
        else{
            resp = resp - ((pow(x,i+i))/(factorial(i+i)));
            bool = 0;
        }
        i++;
    }
    return resp;
}

int factorial (int n) {
  int i,product=1;
  for (i=2; i<=n; ++i)
    product *= i;
  return product;
}
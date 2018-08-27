#include <stdio.h>
#include <stdlib.h>

int contarCaracter(char *array, char ch);
int obtenerIndice(char *array, char ch);

int main()
{
    char array[4] = {'b','a','a','a'};
    int resp = obtenerIndice(array,'a');
    printf("%d",resp);
    return 0;
}

int contarCaracter(char *array, char ch) {
  int i,cont=0;
  for(i=0; i<sizeof(array);i++){
      if(*(array+i)==ch){
          cont++;
      }
  }
  if(cont==0){
      return -1;
  }
  else{
      return cont;
  }
}

int obtenerIndice(char *array, char ch){
    if(contarCaracter(array,ch)==-1)return -1;
    else{
        int i;
        for(i=0; i<sizeof(array);i++){
            if(*(array+i)==ch){
                return i;
            }
        }
    }
}
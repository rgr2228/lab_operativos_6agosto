#include <stdio.h>
#include <stdlib.h>

int contarCaracter(char *array, char ch);

int main()
{
    char array[4] = {'b','b','c','d'};
    int resp = contarCaracter(array,'a');
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
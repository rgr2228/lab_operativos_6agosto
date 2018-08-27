#include <stdio.h>

// Codigo tomado de: https://en.wikibooks.org/wiki/C_Programming/stdio.h/getchar

 int main(void)
 {
   char str[1000];
   int ch, n = 0;
   while ((ch = getchar()) != EOF && n < 1000) {
      str[n] = ch;
      ++n;
   }   
   for (int i = 0; i < n; ++i)
      putchar(str[i]);

   putchar('\n');
   return 0;
 }

 //1)Reescribe la entrada de caracteres
 //2)getchar() es una función que permite leer un carácter desde la entrada estándar, putchar() es una función que te permite escribir un carácter en la salida estándar.
 //3)Las condiciones son que el usuario ingrese 1000 caracteres o hasta encontrar el fin del archivo
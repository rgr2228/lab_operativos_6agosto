#include <stdio.h>
#include <ctype.h>

void testVolverMayuscula(void);
void testEsLetra(void);
void testStringToMayuscula(void);

int esLetra(char ch);
void volverMayuscula(char *ch);
void stringToMayuscula(char s[]);

int main(void) {
  /*testVolverMayuscula();
  testEsLetra();
  testStringToMayuscula();*/
  /*char str[1000];
  int ch, n = 0;
   while ((ch = getchar()) != EOF && n < 1000) {
      str[n] = ch;
      stringToMayuscula(str);
      ++n;
   }
   */
  char x[5]={'1','s','s','2','2'};
  stringToMayuscula(x);
  return 0;
}

int esLetra(char ch) {
    if(isalpha(ch)!=0)return 1;
    return 0;
}

void volverMayuscula(char *ch) {
  if(esLetra!=0){
      if(isalpha(*ch)==2)*ch = *ch-32;
  }
}

void stringToMayuscula(char s[]) {
  int i=0;
  while(s[i]!='\0'){
    volverMayuscula(s + i);
    printf("%c",s[i]);
    i++;
  }
}

void testVolverMayuscula(void) {
  char *p_char;
  char l1 = 'a', l2 = 'z';
  p_char = &l2;
  printf("Minusculas -> %c, %c\n", l1, l2);
  volverMayuscula(&l1);
  volverMayuscula(p_char);
  printf("Mayusculas -> %c, %c\n", l1, *p_char);
}

void testEsLetra(void) {
  char c1 = '!', c2 = 's';
  printf("%c -> %d\n", c1, esLetra(c1));
  printf("%c -> %d\n", c2, esLetra(c2));
}

void testStringToMayuscula(void) {
  char s1[] = "hola que mas!!!\n";
  char s2[] = "1234 e_-+!!hay";
  printf("Cadenas en minuscula -> \n");
  printf("cadena 1: %s\n", s1);
  printf("cadena 2: %s\n", s2);
  stringToMayuscula(s1);
  stringToMayuscula(s2);
  printf("\nCadenas en mayuscula -> \n");
  printf("cadena 1: %s\n", s1);
  printf("cadena 2: %s\n", s2);
}
/* -vetor de char
      char nome[20];
   -ponteiros de char, posteriormente fazer alocação;
      int n = 20
      char = *p;
      p = malloc(sizeof(char) * n);

*/

#include <stdlib.h>
#include <stdoi.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char s1[10] = "joão";
  //s1 = "joao"; Errou!!!!!!!!!!!!!!
  strcpy(s1, "Maria");

  char *s2 = "maria", s3;

  scanf("%s", s1 );
  scanf("%s", s3 ); //erro pois s3 não foi inicializado 
  return 0;
}

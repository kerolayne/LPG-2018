#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n, i;
  long long int a = 1, b = 1;
  
  printf("Selecione o ponto de partida da serie:");
  scanf("%d\n", & n );

  printf("1\n 1\n" );

  for (i = 3; i <= n; i++) {
    long long int atual = a + b;
    printf("%d: %lld\n",i, atual);
    a = b;
    b = atual;
  }
  return 0;
}

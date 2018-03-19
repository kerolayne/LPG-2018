#include <stdlib.h>
#include <stdio.h>
//protótipo das funcoes

int fatorial(int x);

int main() {
  int n;
  int fat;

  scanf("%d", &n );

  fat = fatorial(n);

  printf("o fatorial de %d é %d\n", n, fat );

  return 0;
}

int fatorial(int x){
  int f = 1;
  while (x > 0) {
    f *= x;
    x--;
  }

  return f;
}


// Forma muito simples para compilar.
// Não esquecer de entrar na mesma pasta dos aquivos  >>>> Exemplo Atual :    cd Documentos
// gcc exp-fatorial.c
// ./a.out
// ./a.out < entradas.txt    (Assim, se um arquivo TXT conter todas as entradas você pode jogar direto no programa).

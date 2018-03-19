//potenciaçao
#include <stdlib.h>
#include <stdio.h>

int potencia(int b, int e){

  int p = 1;
  while(e > 0){
    p *= b;
    e--;
  }
  return p;
}

int main() {
  int base, expo;
  scanf("%d", &base, &expo);
  printf("%d elevado %d = %d\n ", base, expo, potencia(base,expo));
  return 0;
}

// Forma muito simples para compilar.
// Não esquecer de entrar na mesma pasta dos aquivos  >>>> Exemplo Atual :    cd Documentos
// gcc exp-fatorial.c
// ./a.out
// ./a.out < entradas.txt    (Assim, se um arquivo TXT conter todas as entradas você pode jogar direto no programa).

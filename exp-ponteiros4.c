#include <stdlib.h>
#include <stdio.h>

// função que deve retornar mais de um valor;
//dado um valor x segundos , calcule quantas horas, minutos e segundos. x = 3678 = 1h 1min 18seg.

void converte(int k, int *ph, int *pm, int *ps){
  int resto;

  *ph = k / 3600;

  resto = k % 3600;

  *pm = resto /60;

  *ps = resto % 60;
}

int main() {
  int x, h, m, s;
  scanf("%d\n", &x );
  converte(x,&h, &m, &s);

  printf("%d h, %d min, %d seg\n", h, m , s );
  return 0;
}

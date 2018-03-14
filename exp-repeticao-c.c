#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  //media de N valores
  /*
  int n;
  scanf("%d", &n);
  int i, x, soma = 0;

  for (i = 1;i <= n; i++){
    scanf("%d", &x);
    soma+=x;
  }
  float media = (float) soma / n ;

  printf("media:%1f\n", media);
  */
  //média de uma quantidade indeterminada de valores(usuário digita 0 para sair)
  int x, soma = 0, n = 0;
  scanf("%d", &x);
  while(x!=0){
      soma +=x;
      n++;
      scanf("%d", &x);
  }
  return 0;
}

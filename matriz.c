 //matriz

#include <stdlib.h>
#include <stdio.h>

void le_vetor(int v[], int k) {
  for (i = 0; i < k; i++) {
    printf("%dº valor?",i + 1 );
    scanf("%d",&v[i] ); // Realiza a leitura de K números.
  }
}
int main() {

  int matriz[3][4], i, j;

  for ( i = 0; i < 3; i++) {
  /*  for ( j = 0; j < 4; j++) {
      printf("%d, %d    ",i, j );
      scanf("%d",&matriz[i][j] );
      */
      printf("lendo linha %s\n",i );
      le_vetor(matriz[i],4); //Está passando como um vetor?
    }
  }
  for ( i = 0; i < 3; i++) {
    for ( j = 0; j < 4; j++) {
      printf("%d", matriz[i][j]); //Demonstra a matriz.
    }
    printf("\n");
  }
  return 0;
}

//Soma Matrizes
#include <stdlib.h>
#include <stdio.h>

void le_matriz(int m[][10], int l, int c){
  int i, j;

  for ( i = 0; i < l; i++) {
    for ( j = 0; j < c; j++) {
      printf("%d, %d    ",i, j );
      scanf("%d",&m[i][j] );
    }
  }
}
void soma(int m1[][10], int m2[][10], int m3[][10], int l, int c){
  int i, j;

  for ( i = 0; i < l; i++) {
    for ( j = 0; j < c; j++) {
      m1[i][j] = m2[i][j] + m3[i][j];
    }
  }
}
void mostra_matriz(int m[][10],int l, int c){
  int i, j;
  for ( i = 0; i < l; i++) {
    for ( j = 0; j < c; j++) {
      printf("%4d", m[i][j]);
    }
    printf("\n");
  }
}
int main() {
  int a[10][10], b[10][10], c[10][10];
  int la, ca, lb, cb, lc, cc;

  printf("lendo as dimenções da matriz a:\n" );
  scanf("%d %d", &la, &ca);

  printf("lendo as dimenções da matriz b:\n" );
  scanf("%d %d", &lb, &cb);

  if (la > 10 || ca > 10 || lb > 10 || cb > 10) {
    printf("Erro: no maximo 10!\n");
  }else{
    if (la!=lb || ca!=cb) {
      printf("Erro: Matrizes incopativeis\n" );
    }else{
      le_matriz(a, la, ca);
      le_matriz(b, lb, cb);
      soma(a,b,c,la,ca);
      mostra_matriz(c,la,ca);

    }
  }

  return 0;
}

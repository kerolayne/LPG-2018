#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// fflush limpa arquivos.....
typedef struct{
  float x,y;
}Ponto;
int main(int argc, char const *argv[]) {
  int n =0, i;

  Ponto *v = malloc(sizeof(Ponto));
  FILE *arq = fopen("pontos.bin", "rb");
  if(arq == NULL){
    printf("Erro!\n");]
    return -1;
  }
  while(!feof(arq)){
    Ponto p;
    if(fread(&p, sizeof(Ponto), 1, arq) ==1){
      n++;
      v = realloc(v, sizeof(Ponto), 1, arq);
      fread(&v[n - 1], sizeof(Ponto), 1, arq);
      v[n - 1] = p;
    }
  }

  fclose(arq);

  printf("%d registros.\n", n);

  for (i = 0; i < n; i++) {
    printf("Ponto %d\n", i + 1 );
    printf("x = %.1f, y = %.1f\n", v[i].x, v[i].y);
  }

  free(v);
  return 0;
}

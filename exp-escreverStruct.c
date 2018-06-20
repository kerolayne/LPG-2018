#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// fflush limpa arquivos.....
typedef struct{
  float x,y;
}Ponto;
int main(int argc, char const *argv[]) {
  FILE *arq = fopen("pontos.bin", "wb");
  if(arq == NULL){
    printf("Erro!\n");]
    return -1;
  }

  char c;

  do {
    Ponto p;
    printf("Digite as entradas\n");
    scanf("%f %f", &p.x, &p.y);
    fwrite(&p, sizeof(ponto), 1, arq);
    printf("continuar?(s,n)\n");
    fflush(stdin);
    scanf("%c", &c);
  } while(c == 's');

  fclose(arq);

  return 0;
}

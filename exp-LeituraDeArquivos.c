#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*
texto: dados são representados como caracteres.
Ex: um valor float ocupa 4 bytes em memoria, mas pode ocupar
uma quantidade diferente de bytes num arquivo texto, dependendo
do formato == -17,7269 } 8 bytes

binario: dados são representados da mesma forma que na memoria.
ex: float ocupa 4bytes tanto em memória, quant em arquivo. porem,
não é legivel em formato texto

entrada/saida:em arquivos binarios.

int fread(void *end, size_t tam, int qtd, FILE *arq);
int fwrite(void *end, size_t tam, int qtd, FILE *arq);
*/

int main(int argc, char const *argv[]) {
  char s[20] = "testando...1,2,3";
  int v[10] = {1,2,3,4,5,6,7,8,9,10};

  FILE *out = fopen ("teste.bin", "wb");

  if(out == NULL){
    printf("Erro no arquivo!\n");
    return -1;
  }
  fwrite(s,sizeof(char), 20, out);

  fwrite(v,sizeof(int), 10, out);

  fclose(out);

  return 0;
}

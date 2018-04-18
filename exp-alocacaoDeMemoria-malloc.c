#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Alocação dinamica de memoria.
// utliza-se a função malloc(), recebendo como parametro a quantidade de Bytes que deve ser alocada 
//a função retorna o endereço de memoria da area alocada, ou a constante null, que indica que não foi possivel fazer a alocação.
// cabeçalho malloc: void *                   malloc(size_t n);
//                    '->ponteiro sem tipo              '-> inteiro longo não sinalizado= não negativo 
// a função sizeof calcula o tamanho em bytes de um tipo de dados ou variavel.
/* ex:int n = sizeof(double);
      printf("double ocupa %d\n", n);
      ----------------------
      printf("char ocupa %d\n", sizeof(char));
      ----------------------
      int v[5];
      printf("v ocupa %d\n", sizeof(v));
      ----------------------
      int v[] = {2,4,16,12,20}
      int n = sizeof(v) / sizeof(int);
*/



//alocando um int 
int main(int argc, char const *argv[]) {
    int *p = malloc(sizeof(int);
    *p = 12;
    printf("%d\n", *p);

    scanf("%d\n", p);
    printf("%d\n", *p);

    free(p); // libera a memória.
  return 0;
}

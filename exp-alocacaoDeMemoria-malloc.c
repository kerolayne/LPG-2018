#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Alocação dinamica de memoria.
// utliza-se a função malloc(), recebendo como parametro a quantidade de Bytes que deve ser alocada 
//a função retorna o endereço de memoria da area alocada, ou a constante null, que indica que não foi possivel fazer a alocação.
// cabeçalho malloc: void *                   malloc(size_t n);
//                    '->ponteiro sem tipo              '-> inteiro longo não sinalizado= não negativo 

//alocando um int 
int main(int argc, char const *argv[]) {
    int *p = malloc(4);
    *p = 12;
    printf("%d\n", *p);

    scanf("%d\n", p);
    printf("%d\n", *p);

    free(p); // libera a memória.
  return 0;
}

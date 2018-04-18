#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//ponteiros e vetores 
//quando o identificadores de uma varialvel é um vetor representa o seu proprio endereço
//por outro lado, um ponteiro pode ser tratado como um vetor
//consequentemente, vetores em c são sempre passados por teferencia.
//Atenção: embora vetores possam ser tratados como ponteiros, eles são imutaveis, ou seja, não podem apontar para outros endereços.
/* int v[5]; v2[5];
v2 = v; x erro !
*/

void mostra(int *p){
  int i;
  for (i = 0; i < 5; i++) {
    printf("%d\n", p[i] );
  }
}

int main() {
  int v[5] = {2,4,6,8,10};
  mostra(v);
  return 0;
}

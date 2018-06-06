#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 2
//tipos de dados estruturados

/*
  --permitem o armazenamento de diversos valores --> hererogêneos

  --cada valor é armazenado em um campo, que é identificado por um nome.

  --uma vez criado , ele passa a ser tratado por um campo de dados da linguagem

  DECLARAÇÃO:   usa-se uma bloco chamado STRUCT onde são declarados os campos.
    em geral, a declaração de uma STRUCT é feita no inicio do codigo, fora de
    qualquer função.

  variaveis de tipo estruturadas são tratadas como variaveis de tipo simples. = atribução
                                                                              = passagem porparametro = por valor
                                                                                                      = por referência(ponteiros)

*/
//exemplo: conta de banco;

struct conta{
  int agencia, numero;
  float saldo;
};

void mostra_conta(struct conta x) {
  printf("Ag;%d\nNUM;%d\nSaldo;%.2f\n", x.agencia, x.numero, x.saldo);
}

void le_conta(struct conta *p) {
  scanf("%d %d %f", &p->agencia, &p->numero, &p->saldo);
}
int main(int argc, char const *argv[]) {
  struct conta v[MAX];
  int i;
  for ( i = 0; i < MAX ; i++) {/*
    printf("digite os dados da conta %d\n", i);
    scanf("%d %d %f", &v[i].agencia, &v[i].numero, &v[i].saldo);
    */le_conta(&v[i]);
  }
  for (i = 0; i < MAX; i++) {/*
    printf("dados da conta %d\n", i);
    printf("Ag;%d\nNUM;%d\nSaldo;%.2f\n", v[i].agencia, v[i].numero, v[i].saldo);
    */mostra_conta (v[i]);
  }
  return 0;
}

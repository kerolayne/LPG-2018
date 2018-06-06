#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

int main(int argc, char const *argv[]) {
  struct conta x, y;

  x.agencia = 123;
  y.agencia = 456;

  scanf("%d", &x.numero);
  scanf("%f", &x.saldo);

  printf("dados da conta:\n");
  printf("Ag:%d\nNumero:%d\nSaldo:%.2f\n", x.agencia, x.numero, x.saldo);

  y = x;//y recebe os valores dos campos de x;

  printf("Ag:%d\nNumero:%d\nSaldo:%.2f\n", y.agencia, y.numero, y.saldo);
  return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void mostra_conta(/*...*/){
  //completar
}
void le_conta(/*...*/) {
  //completar
}
typedef struct{
  int cpf;
  char nome[31];
}Cliente;

typedef struct{
  int agencia, numeero;
  float saldo;
  Cliente cliente;
}Conta;

int main(int argc, char const *argv[]) {
  int n = 0, i;
  Conta *u = malloc(sizeof(Conta));
  char c;

  do{
    n++;
    v = realloc(u, sizeof(conta)* n);
    le_conta(&v[n-1]);
    printf("contas cadastradas:\n");
    for(i = 0; i < n; i++){
      printf("conta:%d\n", i + 1);
      mostra_conta(v[i]);
    }
    fflush(stdin);
    printf("continuar?(s/n)\n");
    scanf("%c", &c);
  }while(c=='s');
  free(v);
  return 0;
}

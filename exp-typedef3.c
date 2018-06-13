#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*
1.ler uma string e buscar as contas cujo cliente tenha este nome;
2.ler um float e buscar todas as contas com saldo maior ou igual;
*/
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
  char nome2[31];
  float salcomp;
  conta x;

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
  }while(c == 's');

  printf("Digite o nome desejado:\n");
  fgets(buffer, 99, stdin);
  buffer[strlen(buffer) - 1] = \0;

  printf("Digite o nome desejado:\n");
  scanf("%f", &salcomp);
  for (i = 0; i < n; i++) {
    if(x.saldo => salcomp){
      
    }
  }
  
  free(v);
  return 0;
}

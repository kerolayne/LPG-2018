#include <stdlib.h>
#include <stdio.h>

/*variaveis que armazenam endereços de memória == normalmente, de outras variaveis.
 situações de aplicação: -passagem de parametro por referencia.
                        - alocação dinamica de memoria (realocação)
                        - ponteiros para função
 ponteiros são tipados , ou seja, a linguagem c associa um tipo de dado a informação contida no endereço.
 operadores sobre ponteiros:
                        & : obtem o endereço de uma variavel
                        * : deve ser usado somente com ponteiros, e serve para acessar o endereço de memória armazenado pelo ponteiro
declaração: usa-se o * para definir um ponteiro . nesse contexto o * não é operador!

*/

int main() {
  int *p;
  int a = 5;

  p = & a;

  printf("%d\n", p);
  printf("%d\n", *p);

  *p = 0;

  printf("%d\n", a);

  return 0;
}

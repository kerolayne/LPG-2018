//deterine se um numero é primo;

#include <stdlib.h>
#include <stdio.h>

//protétipo das funcoes
int eh_primo(int x);
int conta_div(int k);
int eh_primo2(int x);

int main(int argc, char const *argv[]) {
  scanf("%d\n", & n );

  if (eh_primo(n)) {
    printf("é primo!!\n");
  }else{
    printf("não é primo!!\n");
  }
  return 0;
}
int eh_primo(int x){
  if(conta_div(x) == 2)
    return 1;
  else
    return 0;
}

int conta_div(int k){
  int i, cont = 0;
  for(i = 0; i <= k; i++){
    if(k % i == 0){
      cont ++;
    }
  }
  return cont;
}
int eh_primo2(int x){
  int i;
  for(i = 2; i <= x/2; i++){
    if(x % i == 0 ){
      return 0;
    }
  }
  return 1;
}

#include <stdlib.h>
#include <stdio.h>

int n_primo(int x){
  int i;
  for(i = 2; i <= x/2; i++){ 
    if(x % i == 0 ){ //Verifica se o número é primo.
      return 0;
    }
  }
  return 1;
}

int main() {
  int n = 0;
  int k = 0;
  int cont = 0;

  printf("valor de n: \n");
  scanf("%d", &n);
  printf("valor de k: \n");
  scanf("%d", &k);

  while(cont < n){

    if(n_primo(k)){
      printf("%d é primo.\n", k);
      cont ++;
    }
    k++;

  }



  return 0;
}

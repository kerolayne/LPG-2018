//deterine se um numero é primo;

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, n, cont = 0;
  scanf("%d\n", & n );
  for(i = 1; i <= n; i++){
    //resto da divisão
    if(i % i == 0){
      cont++;
    }
  }
  if (cont == 2) {
    printf("%d é primo!!\n", n);
  }else{
    printf("%d não é primo!!\n", n);
  }
  return 0;
}

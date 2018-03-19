//testar a entrada, que deve ser numérica.
#include <stdlib.h>
#include <stdio.h>

int converte(char x){
  return x - 48;
}

int eh_digito(char x){
  if(x >= '0' && x <= '9'){
    return 1;
  } else{
    return 0;
  }
}

int main() {
  
  char car;
  scanf("%c", &car);


  if(eh_digito(car)){
    printf("é digito:\n", );
    printf("%d\n", converte(car));
  }else{
    printf("Não é digito!\n", );
  }
  
  return 0;
}

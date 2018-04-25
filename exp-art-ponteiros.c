/* soma: ponteiro + inteiro --> endereço 
        (endereço) + valor* sizeof(tipo)
  incremento: (++) --> endereço
  subtração: ponteiro - ponteiro --> inteiro 
            (endereço)-(endereço) 
            ---------------------
                sizeof(tipo)
  */

  #include <stdio.h>
  #include <stdlib.h>

  int main(){
    int v[5], i; 
    int *p;
    for (i = 0; i < 5; i++) {
      printf("%d:", i);
      scanf("%d", v + i);//&v[i]
    }
    for(p = v; p< v + 5; p++){
      printf("%d(%p):\n", *p, p);
      printf("v[%d]:%d(%p)\n", p - v, *p, p );
      
    }

    return 0;
  }

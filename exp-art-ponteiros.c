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

  void inverte(int *p, int k){
    int *p1 = p, *p2 = p + k - 1;
    while(p1 < p2){
      int aux = *p1;
      *p1 = *p2; 
      *p2 = aux;
      p1 ++;
      p2 --;
    }  
  }
  /*    indices!!!!!!!
  void inverte(int *p, int k){
    int i1 = 0, i2 = k - 1;
    while(i1 < i2){
      int aux = p[i1];
      p[i1] = p[i2]; 
      p[i2] = aux;
      i1 ++;
      i2 --;
    }  
  }
*/
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

    inverte(v, 5);

    for(i = 0; i < 5; i ++)
      printf("v[%d]:%d(%p)\n", i, *(v + i), v + i );

    return 0;
  }

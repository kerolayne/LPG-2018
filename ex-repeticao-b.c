    #include <stdlib.h>
    #include <stdio.h>
    
    int main(int argc, char const *argv[]) {
    /* funcao calculo de potenciacao perdendo o valor de Y----------
    int x, y;
    int z = 1;

    scanf("%d %d\n", &x, &y);
    while (y>0) {
      z *= x;
      y --;
    }
    printf("%d\n", &z);

    */
    // funcao calculo de potenciacao sem perder o valor de Y -----------
    int i = 1;
    while (i <= y) {
      z *= x;
      i++;
    }

      /*
      for(i = 1; i <= y; i++){
      z *= x;
    }
      */

      printf("%d elevado a %d é %d\n", x, y, z );
      return 0;
    }

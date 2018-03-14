
    #include <stdlib.h>
    #include <stdio.h>

    int main(int argc, char const *argv[]) {
      //calculo de raiz / algoritimo de pell
      int n;
      int cont = 0, i = 1;
      scanf("%d\n", & n );
      while (n>=i) {
        n -= i;
        i += 2;
        cont ++;
      }
      printf("%d\n", cont );

      return 0;
    }

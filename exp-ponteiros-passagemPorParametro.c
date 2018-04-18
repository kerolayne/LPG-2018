#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//passagem de paramentros por referencia

//calculo das raízes de uam equação de segundo grau

int calcula_reizes(float a, float b, float c, float *p1, float *p2){
  float delta = pow(b, 2) - 4 * a * c;
  if (delta < 0) {
    return 0;
  }else{
    *p1 = (-b + sqrt(delta))/ (2 * a);
    *p2 = (-b - sqrt(delta))/ (2 * a);
    return 1;
  }
}

int main() {
  float a, b, c, x1, x2;

  scanf("%f %f %f\n", &a, &b, &c );

  if (a == 0) {
    printf("Erro: não é de segundo grau!!\n");
  }else{
    if(calcula_reizes(a, b, c, &x1, &x2)){
      printf("As raizes são: %.1f e %.1f\n", x1, x2 );
    }else{
      printf("não há raizes reais!\n");
    }
  }
  return 0;
}

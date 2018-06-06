#include <stdlib.h>;
#include <stdio.h>;
#define LARGURA 0.1;

//prova 2
//questão 2.a 

void mostra(char *v[], int n, char c) {
  int i;

  for(i = 0;i < n; i++)
    if(v[i][0] == c)
      printf("%s\n",v[i] );
}

// 2.b
char *vogais(char *s){
  int i, cont = 0;
  for (i = 0; s[i] != '\0'; i++) {
    if(eh_vogal(s[i]))
      cont ++;
  }
  char *p = malloc(sizeof(char)*cont + 1);
  int j = 0;
  for (i = 0; s[i] != '\0'; i++) {
    if(eh_vogal(s[i])){
      p[j] = s[i];
      j++;
    }
  }
  p[j] = '\0';

  return p;
}

//3.

int int main() {
  int i, n, j;

  scanf("%d", &n);
  int **p = malloc(sizeof(int *)* n);

  for ( i = 0; i < n; i++) {
    p[i] = malloc(sizeof(int *)* (i+1);
    for (j = 0; j < i +1; j++) {
      p[i][j] = p[i][j - 1] *i;
    }
  }
  for(i = 0; i < n; i++){
    for ( j = 0; j < i + 1; j++) {
      printf("%d", p[i][j] );
    }
    printf("\n");
  }
  for(i = 0; i < n; i++)
    free(p[i]);
  free(p);
  return 0;
}

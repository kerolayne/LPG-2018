
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *aloca_str(){
  char buffer[101];

  //scanf("%s", buffer );
  fflush(stdin);
  fgets(buffer, 100, stdin);
  buffer[strlen(buffer) - 1] = '\0';

  char *p = malloc(sizeof(char) * (strlen(buffer) + 1)); // +1 --> \0

  strcpy(p, buffer);

  return p;
}

int main() {
  int n, i;

  printf("quantos nomes?");
  scanf("%d", &n );

  char **p = malloc(sizeof(char *)*n);
  for (i = 0; i < n; i++) {
    printf("digite o %dº", i + 1 );
    p[i] = aloca_str();
  }

  for (i = 0; i < n; i++) {
    printf("%d: %s\n", i, p[i] );
  }
  for (i = 0; i < n; i++) {
    free(p[i]);
  }
  free(p);
  return 0;
}

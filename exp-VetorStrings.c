#include <stdlib.h>
#include <stdoi.h>
#include <string.h>

char *aloca_str(){
  char buffer[100];

  scanf("%s", buffer );
  //fgets(buffer, 99, stdin);
  //buffer[strlen(buffer) - 1] = \0;

  char *p = malloc(sizeof(char) * (strlen(buffer) + 1)); // +1 --> \0

  strcpy(p, buffer);

  return p;
}

int main(int argc, char const *argv[]) {
  char *v[5];
  int i;

  for (i = 0; i < 5; i++) {
    printf("digite o %dº nome\n", i + 1);
    v[i] = aloca_str();
  }

  for (i = 0; i < 5; i++) {
    printf("%i: %s\n", i, v[i] );
  }
  for (i = 0; i < 5; i++) {
    free(v[i]);
  }
  return 0;
}

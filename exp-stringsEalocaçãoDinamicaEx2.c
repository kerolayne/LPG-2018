
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


  printf("Digite seu nome:\n");
  char *nome = aloca_str();
  printf("nome: %s\n", nome);

  free(nome);
  
  return 0;
}

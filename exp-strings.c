//Strings
//Cadeia de caracteres
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
- > Valor de Char

Char nome[20]

0  1  2  3  4  5   ....  19
J  O  Ã  O  \0     ....

Scanf("%s",nome);
O caractere \0 marca o final do conteũdo*/

void copia_str(char *dest, char *orig){
  int i;
  for (i = 0; orig[i] != '\0';i++) {
    dest[i] = orig[i];
  }
  dest[i] = '\0';

}
int conta_char(char *p){
  int cont = 0;
  while (p[cont] != '\0') {
    cont ++;
  }
  return cont;
}
void concatena(char *a, char *b){
int i = 0,j=0;
  while (a[i] != '\0'){
  i++;
  }
  while (b[j] != '\0'){
  a[i+j]=b[j];
  j++;

  }


}

int main(int argc, char const *argv[]) {
  char str[20] = "Maria";
  char str2[20] = {'j', 'o', 'a', 'o'};
  int i = 0;

  printf("%s e %s\n", str2, str);
  //str = "pedro"; ======= ERRO!!!!

  while(str[i] != '\0' ){
    printf("%c\n", str[i] );
    i++;
  }
  // conta char
  for(i = 0; i < strlen( str)/*conta_char(str)*/; i ++){
    printf ("%c\n", str[i]);
}

  // copia char
  //strcpy(str,"pedro");
  //copia_str(str,"pedro");
  //printf("%s\n", str );
  concatena(str,str2);
  printf("%s\n",str);
  // concatenação

  //strcat(str2, str);

  //printf("%s e %s\n", str2, str );



  return 0;
}

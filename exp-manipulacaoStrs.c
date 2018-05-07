#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compara_str(char *a, char *b){
  int i;
  
  for ( i = 0;a[i] != '\0' ; i++) {
    
    if(a[i] > b[i]){
      return 1; // a < b
    }
    else if (a[i] < b[i]) {
      return -1; //a > b
    }
  }
  if(b[i] == '\0')
    return 0;//a == b
  else
    return -1; //a < b
}


int main(int argc, char const *argv[]) {
  char s1[20], s2[20];

  scanf("%s %s", s1, s2 );

  printf("s1 = %s\ns2 = %s\n", s1, s2);
/*
  if(s1 == s2)// compara os endereços!!!!
    printf("são iguais\n" );
  else
    printf("são diferentes\n" );
    */
    if(strcmp(s1, s2) == 0)
      printf("são iguais\n" );
    else
      if(strcmp(s1, s2) > 0)
        printf("%s é maior que %s\n",s1, s2 );
      else
        printf("%s é menor que %s\n",s1, s2 );
        
    
  return 0;
}

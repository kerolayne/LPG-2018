//dado um vetor e um valor a ser buscado(chave), indicar que o valor foi encontrado(sua posição) ou indicar que não foi encontrado.

int main(int argc, char const *argv[]) {
  int int v[10] = {7,4,11,66,21,27,-1,8,3,13};
  int n = 10, chave;
  int i;
  int achou = 0;

  scanf("%d",&chave);
  for (size_t i = 0; i < n; i ++) {
    if(chave == v[i]){
      printf("Encontrado no indice: %d\n", i);
      achou = 1;
    }
  }
  if(!achou){
    printf("Não encontrado:\n", );
  }
  
  return 0;
}

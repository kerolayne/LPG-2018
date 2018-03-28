int main(){
  
  int v[13] = {2,4,5,7,11,18,21,27,32,38,71,99,101};
  int n = 13, chave;
  int ini = 0, fim = n-1, meio;
  
  scanf("%d", &chave);
  
  do{
    meio = (ini + fim)/2;
    if(v[meio] < chave)
      ini = meio + 1;
    else
      if(v[meio]> chave)
        fim = meio - 1;
  }while(v[meio] != chave && ini <= fim);
  if(ini > fim)
    printf("não achou");
  else
    printf("encontrado no indice: %d\n", meio);

  return 0;
}


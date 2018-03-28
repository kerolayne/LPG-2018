int main() {
  int v[10] = {7,4,11,66,21,27,-1,8,3,13};
  int n = 10;

  int i;

  for(i = 0; i < n - 1; i ++){
    int i_menor = i, j;
    for(j = 1; j < n; j ++){
      if(v[j] < v[i_menor]){
        i_menor = j;
      }
    }
    int aux = v[i];
    v[i] = v[i_menor];
    v[i_menor] = aux
  }

  for(i = 0; i < n; i ++){
    printf("%d : %d\n", i, v[i]);
  }
  return 0;
}

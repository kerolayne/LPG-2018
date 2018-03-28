int main() {
  int v[10] = {7,4,11,66,21,27,-1,8,3,13};
  int n = 10, i;

do{
  trocou = 0;
    for(i = 0; i < n; i ++){
      if(v[i] > v[i + 1]){
        int aux = v[i];
        v[i] = v[i + 1];
        v[i + 1] = aux;
        trocou = 1;
      }
    }
  }while(trocou);

  for(i = 0; i < n; i ++){
    printf("%d : %d\n", i, v[i]);
  }

  return 0;
}

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

#define  TAM = 50;


typedef struct{
    char[TAM] nArtista;
    char[TAM] nacionalidade;
}Artista;

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    char[TAM] nMusica;
    float duracao;
    char[TAM] estilo;
    Artista artista;
    Data datacad;
}Musica;

int apaga_reg(Musica *v, char n_reg); //Apaga
int inserir_reg(Musica *v, char n_reg); //Insere nova música
int alterar_reg(Musica *v, char n_reg); //Altera os registros de uma música
void mostrar(Musica *v); //Mostra determinada Música
int consulta_reg(Musica *v, char n_reg); //Consulta se a música existe
void ordena_lista(Musica *v); //Ordena a lista por ordem alfabética
int procurar_musica(Musica *v, char n_reg); //Procura a música por nome.

int main(void){
    Musica *v = malloc(sizeof(Musica));

    
    
    FILE *arq = fopen("Musicas.bin", "wb");
    if(arq == NULL){
        printf("Erro!\n");
    return -1;
    }
    char l;
    char select;
    char[TAM] reg;

    do{
    printf("deseja cadastrar[c], excluir[e] ou alterar[a]?");
    scanf("%c", &select);
      
    if(select == 'c'){ //verificar se o cadastro já existe
        printf("digite o nome do registro\n");
        scanf("%s",reg);
        inserir_reg(v,reg);
    }else if(select == 'e'){
        printf("digite o nome do registro\n");
        scanf("%s",reg);
        apaga_reg(v,reg);
    }else if(select == 'a'){
        printf("digite o nome do registro\n");
        scanf("%s",reg);
        alterar_reg(v,reg);
    }else{
        printf("tente novamente\n");
    }
      
    printf("Sair ou Continuar?[s, c]\n");
    scanf("%c", &l);
      
    }while (l == 'c');
  
  
    fclose(arq);
  
  
    return 0;
}

int inserir_reg(Musica *v, char n_reg){
    int lastpos=0;
  
    if (procurar_musica(v, n_reg)){
        Printf("Música já existe.\n");
        return 0;
    }else{  
        while(v[lastpos].nMusica!=NULL){
            lastpos++;
        }
    }
        
        v[lastpos].nMusica = n_reg;
      
        alterar_reg(v, n_reg);
    }
    
    return 1;
}

int alterar_reg(Musica *v, char n_reg){
    
    int i=0, alt;
    char 
    float durac;
  
    if(v[i]->nMusica==NULL){
        printf("Registro não encontrado");
        return 0;
    }
  
    while(!(strcmp(v[i]->nMusica,n_reg))){           //É igual a função procurar registro, mas essa retorna a posição.

        i++;
      
        if(v[i]->nMusica==NULL){
           printf("Registro não encontrado");
           return 0;
        }
    }
  
    do{
        printf("O que você deseja alterar/adicionar?\n 0 Nada\n 1 Duração \n 2 Estilo \n 3 Artista \n 4 Data de Cadastro \n 5 Todas as Caracteristicas");
        scanf("%d",&alt);
        
        if(alt==1){
            Printf("Digite a duração:\n");
            scanf("%f", v[i]->duracao);
          //v[i].duracao = durac;
          
        }else if(alt == 2){
            Printf("Digite a estilo:\n");
            scanf("%s", v[i]->estilo);
          
        }else if(alt == 3){
            Printf("Digite o Artista\n");
            scanf("%s", v[i].artista);
      
        }else if(alt == 4){
            Printf("Digite a data\n");
            scanf("%f", v[i].duracao);
          
        }else if(alt == 5){
            Printf("Digite o Artista\n");
            scanf("%s", v[i].artista);
      
            Printf("Digite a data\n");
            scanf("%f", v[i].duracao);
          
            Printf("Digite a estilo:\n");
            scanf("%s", v[i]->estilo);

            Printf("Digite a duração:\n");
            scanf("%f", v[i]->duracao);

  
    }while(alt!=0);
    
}

/*
// fflush limpa arquivos.....
typedef struct{
  float x,y;
}Ponto;
int main(int argc, char const *argv[]) {
  FILE *arq = fopen("pontos.bin", "wb");
  if(arq == NULL){
    printf("Erro!\n");]
    return -1;
  }

  char c;

  do {
    Ponto p;
    printf("Digite as entradas\n");
    scanf("%f %f", &p.x, &p.y);
    fwrite(&p, sizeof(ponto), 1, arq);
    printf("continuar?(s,n)\n");
    fflush(stdin);
    scanf("%c", &c);
  } while(c == 's');

  fclose(arq);

  return 0;
}
// cadigo bestinha 
int main(int argc, char const *argv[]) {
  char s[20] = "testando...1,2,3";
  int v[10] = {1,2,3,4,5,6,7,8,9,10};

  FILE *out = fopen ("teste.bin", "wb");

  if(out == NULL){
    printf("Erro no arquivo!\n");
    return -1;
  }
  fwrite(s,sizeof(char), 20, out);

  fwrite(v,sizeof(int), 10, out);

  fclose(out);

  return 0;
  
  // o outro 
  typedef struct{
  float x,y;
}Ponto;
int main(int argc, char const *argv[]) {
  int n =0, i;

  Ponto *v = malloc(sizeof(Ponto));
  FILE *arq = fopen("pontos.bin", "rb");
  if(arq == NULL){
    printf("Erro!\n");]
    return -1;
  }
  while(!feof(arq)){
    Ponto p;
    if(fread(&p, sizeof(Ponto), 1, arq) ==1){
      n++;
      v = realloc(v, sizeof(Ponto), 1, arq);
      fread(&v[n - 1], sizeof(Ponto), 1, arq);
      v[n - 1] = p;
    }
  }

  fclose(arq);

  printf("%d registros.\n", n);

  for (i = 0; i < n; i++) {
    printf("Ponto %d\n", i + 1 );
    printf("x = %.1f, y = %.1f\n", v[i].x, v[i].y);
  }

  free(v);
  return 0;
}

 
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct enfermeira
{
	int matricula;
	char nome[30];
};
void consultar(struct enfermeira *penf);
void cadastrar(struct enfermeira * penf);
void escreveArquivo(struct enfermeira *penf, FILE * saida);
void leArquivo(struct enfermeira *penf2, FILE * entrada);

int main(int argc, char *argv[]) {
	// Cria dois ponteiros de struct enfermeira
	struct enfermeira * penf, * penf2;
	int i, result;
	// Cria dois ponteiros de arquivos
	FILE * entrada, * saida;
	// Aloco dois vetores (penf e penf2) de struct enfermeira
	penf=malloc(3*sizeof(struct enfermeira));
	penf2=malloc(3*sizeof(struct enfermeira));
	// Associo aos ponteiros de arquivos ao arquivo teste.txt
	// entrada para leitura (r) e saida para escrita (w)
	entrada = fopen("teste.txt", "r");
	saida = fopen("teste.txt", "w"); 
	// funcao que cadastra no vetor penf
	cadastrar(penf);
	escreveArquivo(penf, saida);
  	// exibo o vetor penf
	consultar(penf);
	// le arquivo teste.txt
	leArquivo(penf2, entrada);
	consultar(penf2);
	// desaloco so vetores penf e penf2
	free(penf2);
	free(penf);
	//fecho arquivo de leitura teste.txt
	fclose(entrada);
	return 0;
}
void escreveArquivo(struct enfermeira *penf, FILE * saida)
{
	int i, result;
	// laço que escreve no arquivo texte.txt
	for (i=0; i<3;i++)
	{
	  // escreve no arquivo usando fprintf
      result = fprintf(saida, "%s\n", penf[i].nome);  					  
      // verifico se houve erro na escrita
      if (result == EOF)		    
	  	printf("Erro na Gravacao\n");
  	}
  	// fecho o arquivo de escrita
  	fclose(saida);
}
void leArquivo(struct enfermeira *penf2, FILE * entrada){
	int result,i = 0;
	// lê arquivo teste.txt e salva no vetor penf2 
	while (!feof(entrada))
	{
	  result = fgets(penf2[i].nome, 30, entrada);  
	  i++;
	}
}

void cadastrar(struct enfermeira * penf){
	int i;
	for(i=0; i<3; i++){
		printf("Digite nome da enfermeira: ");
		gets(penf[i].nome);
	}
}

void consultar(struct enfermeira *penf){
	int i;
	for(i=0; i<3; i++){
		printf("\nNome da enfermeira: %s", &penf[i].nome);
	}
}








#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void inserir_matriz(int mat[3][3]);
void consultar_matriz(int mat[3][3]);
void exibir_diagonal_principal(int mat[3][3]);

int main(int argc, char *argv[]) {
	int mat[3][3];
	inserir_matriz(mat);
	printf("\n");
	consultar_matriz(mat);
	printf("\n");
	exibir_diagonal_principal(mat);
	return 0;
}

void inserir_matriz(int mat[3][3])
{
	int i,j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Digite Mat[%i][%i]: ", i,j );
			scanf("%i", &mat[i][j]);		
		}
	}
}

void consultar_matriz(int mat[3][3]){
	int i,j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\t %i", mat[i][j] );
		}
		printf("\n\n");
	}
}


void exibir_diagonal_principal(int mat[3][3]){
	int i,j, aux;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\t");
			if(i==j)
				printf("%i", mat[i][j] );
		}
		printf("\n\n");
	}
}


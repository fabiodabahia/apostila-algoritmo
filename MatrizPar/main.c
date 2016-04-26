#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mat[2][4], i, j;
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			printf("Digite Numero: ");
			scanf("%i", &mat[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			if(j % 2 == 0)
				printf("janela: %i ", mat[i][j]);
			else
				printf("Corredor: %i ", mat[i][j]);
		}
		
		printf("\n\n");
	}	
	return 0;
}

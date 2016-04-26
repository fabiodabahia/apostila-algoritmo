#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mat[2][2],i,j, mat2[2][2];
	
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Digite numero:");
			scanf("%i", &mat[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%i \t", mat[i][j]);
		}
		printf("\n\n");
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			mat2[i][j] = mat[j][i];	
		}
	}

	printf("\n\n ************* Transposta **************** \n\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%i \t", mat2[i][j]);
		}
		printf("\n\n");
	}	
	return 0;
}

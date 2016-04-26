#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vet[4],i, aux;
	
	for(i=0;i<4;i++){
		printf("Digite Numero: ");
		scanf("%i", &vet[i]);
	}
	for(i=0;i<4;i++){
		printf("%i \t", vet[i]);
	}
	for(i=0;i<2;i++){
		aux = vet[i];
		vet[i] = vet[3-i];
		vet[3-i] = aux;
	}
	printf("\n\n");
	for(i=0;i<4;i++){
		printf("%i \t", vet[i]);
	}
	
	
	return 0;
}

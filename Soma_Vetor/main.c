#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int vet[10];
	float soma=0, media;
	for(i=0;i<10;i++)
	{
		printf("\nDigite o numero %i  ", i);
		scanf("%i", &vet[i]);
	}
	for(i=0;i<10;i++)
	{
		soma=soma+vet[i];
	}
	printf("\nSoma: %2.2f", soma);
	printf("\nMedia: %2.2f", soma/i);
	return 0;
}

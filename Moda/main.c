#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vet[10],i,j, qtd=0, qtd_mais=0, num_mais;
	
	for(i=0;i<10;i++){
		printf("Digite numero:");
		scanf("%i", &vet[i]);
	}
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(vet[i]==vet[j])
				qtd++;
		}	
		if(qtd > qtd_mais){
			qtd_mais = qtd;
			num_mais = vet[i];
		}
		qtd=0;
	}
	printf("Qtd Mais : %i", qtd_mais);
	printf("Numero Mais : %i", num_mais);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, qtd_intervalo=0, qtd_nao_intervalo=0;
	char opcao;
	
	do
	{
		printf("\n Digite o numero: ");
		scanf("%i", &num);
		if(num >= 10 && num<=20)
		{
			qtd_intervalo++;
		}
		else
		{
			qtd_nao_intervalo++;
		}
		fflush(stdin);
		printf("Deseja informar outro numero? ");
		scanf("%c", &opcao);
	}while(opcao != 'n');
	
	printf("\n Quantidade no intervalo eh %i", qtd_intervalo);
	printf("\n Quantidade que nao esta no intervalo eh %i", qtd_nao_intervalo);
	
	
	return 0;
}

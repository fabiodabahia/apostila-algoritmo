#include <stdio.h>
#include <stdlib.h>


struct struct_carro{
       int cod;
       char modelo[30];
       char placa [11];
       }typedef Carro;

void pesquisar_carro(Carro lista_carro[2]);
void pesquisar_elemento(Carro lista_carro[2], char placa[10]);
int qtd_carro=0;

int main(int argc, char *argv[])
{
    Carro lista_carro[100];
    int opcao, i;
    char p_placa[10], seguir;
        
    do{    
        printf("1- Cadastrar Carro \n");
        printf("2- Pesquisar Todos \n");
        printf("3- Pesquisar Elemento \n");
		printf("4- Alterar Carro \n");
        printf("5- Sair \n");
        scanf("%i", &opcao);
        fflush(stdin);
        switch(opcao)
        {
           case 1:  
                    for(i=qtd_carro; i<100; i++)              
                    {
                       printf("Digite o Modelo: ");
                       scanf("%s", &lista_carro[i].modelo);
                       printf("Digite a placa:");
                       scanf("%s", &lista_carro[i].placa);
                       lista_carro[i].cod = i;
                       fflush(stdin);
                       printf("Deja cadastrar novamente [s]-Sim [n]-Nao ?");
                       scanf("%c", &seguir);
                       if(seguir == 'n')
                       		break;
					   
                    }
					qtd_carro=i+1;  
                    break;
           case 2: 
                    pesquisar_carro(lista_carro);               
                    break;
           case 3: 
                    printf("Digite a placa a ser pesquisada: ");
                    gets(p_placa);
                    pesquisar_elemento(lista_carro, p_placa);
                    break;
           case 4: 
                    printf("Digite o codigo do carro");
                    int  cod;
                    scanf("%i", &cod);
                    for(i=0; i<qtd_carro; i++)
                    {
                    	if(cod == lista_carro[i].cod)
                    	{
                    		printf("Digite a nova placa:");
                       		scanf("%s", &lista_carro[i].placa);
                    	}
                    }
                    break;
           case 5:
           			printf("Saindoooooo...");
           			break;
           default: 
                    printf("Opcao invalida! \n\n");
        }
    }while(opcao!=5); 
    
  system("PAUSE");	
  return 0;
}

void pesquisar_carro(Carro lista_carro[2])
{
     int i;
     for(i=0; i<qtd_carro; i++)     
     {
         printf("Cod: %i \n", lista_carro[i].cod);
         printf("Modelo: %s \n", lista_carro[i].modelo);
         printf("Placa: %s \n", lista_carro[i].placa);
     }
}

void pesquisar_elemento(Carro lista_carro[2], char placa[10])
{
     int i;
     printf("\n\n *** Pesquisar Elemento *** \n\n");
     for(i=0; i<3; i++)     
     {
         printf("%i \n\n", strcmp(lista_carro[i].placa, placa));
         if(!strcmp(lista_carro[i].placa, placa)){
             printf("Cod: %i \n", lista_carro[i].cod);
             printf("Modelo: %s \n", lista_carro[i].modelo);
             printf("Placa: %s \n", lista_carro[i].placa);
     }   }
}

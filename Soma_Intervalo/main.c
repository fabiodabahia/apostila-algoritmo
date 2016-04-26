#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int ini, fim, i, soma=0;
    printf("Digite o primeiro e ultimo numero: ");
    scanf("%i%i", &ini, &fim);
    for(i=ini; i<=fim; i++)
    {
        soma=soma+i;
    }
    printf("A soma eh: %i \n", soma);
  
  
  system("PAUSE");	
  return 0;
}

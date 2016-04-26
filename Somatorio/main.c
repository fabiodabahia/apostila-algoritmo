#include <stdio.h>
#include <stdlib.h>

int LePositivo();
int Somatorio(int num);
int main()
{
  int i, numLido, total_somatorio;
  for(i=0;i<5;i++)
  {
     numLido = LePositivo();
     total_somatorio = Somatorio(numLido);
     printf("O somatorio eh: %d \n", total_somatorio);
  }
  
  system("PAUSE");	
  return 0;
}

int LePositivo()
{
    int num;
    
    do{
       printf("Digite um numero");
       scanf("%d", &num);
    }while(num<=0);
    return num;
}

int Somatorio(int numero)
{
    int i, result=0;
    for(i=1; i<=numero; i++)
    {
       //result = result + i;
       result += i;
       printf("%d", result);
    }
    return result;
}

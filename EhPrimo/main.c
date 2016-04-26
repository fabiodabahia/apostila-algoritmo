#include <stdio.h>
#include <stdlib.h>

int HePrimo(int num);
int main(int argc, char *argv[])
{
  int i, result;

  for(i=1; i<10; i++)
  {
      result = HePrimo(i);
      if(result == 1)
         printf("Numero %d eh primo. \n", i);
  }
  system("PAUSE");	
  return 0;
}

int HePrimo(int num)
{
    int i, divisores=0;
    for(i=1; i<=num; i++)
    {
       if(num%i == 0){
          divisores++;
       }
    }
    if(divisores == 2)
      return 1;
    else
      return 0;
}






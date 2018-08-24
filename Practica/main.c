#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x,y,a,b,res;
  printf("\nIngrese el valor para x");
  scanf("%d",&x );
printf("\nIngrese el valor para y");
  scanf("%d",&y );
  printf("\nIngrese el valor para a");
  scanf("%d",&a );
  printf("\nIngrese el valor para b");
  scanf("%d",&b );
  res=((x+y)*(x+y))*(a-b);
  printf("\nEl resultado es %d\n", res);
  
   system("PAUSE");	
  return 0;
}

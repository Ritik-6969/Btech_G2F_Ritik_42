#include <stdio.h.>
#include <math.h>
int main ()
{
  int a;
  printf("enter a number");
  scanf("%d", &a);
  
  if(a<0)
  {
    a= a*(-1);
    printf("absolute number %d", a);

  }
  else
  {
     a=a;
     printf("absolute number %d", a);
  }
  return 0;
}
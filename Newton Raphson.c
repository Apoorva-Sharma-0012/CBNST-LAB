#include <stdio.h>
#include<math.h>
float f(float x)
{
  return(x*log10(x)-1.2);
}
float fd(float x)
{
  return(log10(x)+0.43429);
}
int main()
{ 
  float x1,x2,e;
  printf("Enter the initial approximation: ");
  scanf("%f %f",&x1,&x2);
  printf("enterthe tolerance error: ");
  scanf("%f",&e);
  int N=1;
  do
  {
    x1=x2;
    x2=x1-f(x1)/fd(x1);
    printf("%d iteration value is:%f\n",N,x2);
    N++;
  }while(fabs(x1-x2)>e);
  printf("\n after %d iteration the root is:%f\n",N,x2);
  return 0;
}

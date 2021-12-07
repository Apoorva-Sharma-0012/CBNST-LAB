// Regula falsi method

#include <stdio.h>
#include<math.h>
float f(float x)
{
  return (x*x*x-x-1);
}
void rf(float *x,float x1,float x2,float fx1,float fx2,int *i)
{
  *x=x1-((x1-x2)/(fx1-fx2))*fx1;
  ++(*i);
  printf("iteration no.%d=%7.5f\n",*i,*x);
}
int main()
{ 
  int i=0,N;
  float x,x1,x2,x3,e;
  printf("Enter the values: ");
   scanf("%f %f", &x1,&x2);
   printf("Enter tolerable error: ");
   scanf("%f", &e);
   printf("Enter maximum iteration: ");
   scanf("%d", &N);
// printf("\n i \t x1\t\t f(x1) \t\t x2 \t\t f(x2)\n");
 rf(&x,x1,x2,f(x1),f(x2),&i);
 do
 {
   if(f(x1)*f(x)<0)
   x2=x;
   else
   x1=x;
   rf(&x3,x1,x2,f(x1),f(x2),&i);
   if(fabs(x3-x)<e)
   {
    printf("after %d Iteration roots=%7.5f",i,x3);
    return 0;
   }
   x=x3;
    }
    while(i<N);
    printf("not covergent");
  return 1;
}

//Bisection Method

#include <stdio.h>
#include<math.h>
float f(float x)
{
  return(x*x*x-x-1);
}
void bisection(float *x,float x1,float x2,int *i)
{
  ++(*i);
  *x=(x1+x2)/2;
  printf("iteration no.%d x\t=\t%7.5f\n",*i,*x);
}
int main()
{
  int i=0,N;
  float x,x1,x2,x3,e;
   printf("Enter the value of x1&x2:\n ");
   scanf("%f %f", &x1,&x2);
   printf("Enter tolerable error: ");
   scanf("%f", &e);
   printf("Enter maximum iteration: ");
   scanf("%d", &N);
   bisection(&x,x1,x2,&i);
   do
   {
     if(f(x1)*f(x)<0)
     x2=x;
     else
     x1=x;
     bisection(&x3,x1,x2,&i);
     if(fabs(x3-x)<e)
     {
       printf("after %d iteration root=%7.5f\n",i,x3);
       return 0;
      }
     x=x3;
   }while(i<N);
   printf("\n not Convergent");
   return 0;
}

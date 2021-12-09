#include <stdio.h>
#include<math.h>
#define f1(x,y,z)((y+z+3)/4);
#define f2(x,y,z)(2*x-z+9)/6;
#define f3(x,y,z)((x-y-6)/7);
int main()
{ 
  float x0,y0,z0;
  float x1,y1,z1;
  float e,e1,e2,e3;
  int N=1;
  x0=0;
  y0=0;
  z0=0;
  printf("enter the tolerable error: ");
  scanf("%f",&e);
  do
  {
    x1=f1(x0,y0,z0);
    y1=f2(x1,y1,z0);
    z1=f3(x1,y1,z0);
    e1=fabs(x0-x1);
    e2=fabs(y0-y1);
    e3=fabs(z0-z1);
    x0=x1;
    y0=y1;
    z0=z1;
    N++;
  }
  while (e1>e&&e2>e&&e3>e);
  printf("%f %f %f",x1,y1,z1);
  return 0;
}

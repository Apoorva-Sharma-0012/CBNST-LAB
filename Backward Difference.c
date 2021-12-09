#include <stdio.h>
int main()
{
  int n,i,j,fact=1;
  float h,f,u,u1,a;
  printf("enter the no. of observation: ");
  scanf("%d",&n);
  float x[20],y[20][10];
  printf("\n Enter the value of x: ");
  for(i=1;i<=n;i++)
  {
    scanf("%f",&x[i]);
  }
  printf("\n Enter the value of y: ");
  for(i=1;i<=n;i++){
    scanf("%f",&y[i][1]);
  }
  for(j=2;j<=n;j++)
  {
    for(i=1;i<n;i++)
    {
      y[i+1][j]=y[i+1][j-1]-y[i][j-1];
    }
  }
  for(i=1;i<=n;i++)
  {
    printf("%.1f ",x[i]);
    for(j=1;j<=n;j++)
    {
      if(j<=i)
      printf("%.1f ",y[i][j]);
    }
    printf("\n");
  }
  h=x[2]-x[1];
  printf("Enter the value of x for which y is to be calculated:");
  scanf("%f",&f);
  u=(f-x[n]/h);
  u1=u;
  a=y[n][1];
  for(j=2;j<=n;j++)
  {
    a=a+u1*y[n][j]/fact;
    u1=u1*(u+(j-1));
    fact=fact*j;
  }
  printf("%f",a);
  return 0;
} 

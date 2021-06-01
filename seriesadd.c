#include<stdio.h>
int main()
{
  float sum=0,n,i,fact;
  for(n=1;n<=7;n++)
  {
      printf("%f/%f!",n,n);
      fact=1;
      for(i=1;i<=n;i++)
      {
          fact=fact*i;
      }
      sum=sum+n/fact;
      if(n!=7)
      {
          printf(" + ");
      }
  }
  printf(" = %f\n",sum);
}

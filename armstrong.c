// TO PRINT ALL AMSTRONG NUMBERS B/W 1 AND 500
#include<stdio.h>
#include<math.h>
int main()
{
  int n,n1,n2,n3,l,sum,a;
  for(n=1;n<=500;n++)
  {
      n1=n;
      n2=n;
      n3=n;
      sum=0;
      l=0;
      while(n1>0)
      {
          n1=n1/10;
          l++;
      }
      while(n2>0)
      {
          a=n2%10;
          sum=sum+pow(a,l);
          n2=n2/10;
      }
      if(sum==n3)
      {
          printf("%d\n",n3);
      }

  }
}

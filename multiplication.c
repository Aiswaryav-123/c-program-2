#include<stdio.h>
int main()
{
  int a,n;
  printf("Enter the number:");
  scanf("%d",&a);
  for(n=1;n<=20;n++)
  {
      printf(" %2d x %2d = %2d\n",n,a,n*a);
  }
}

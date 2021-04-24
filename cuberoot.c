#include<stdio.h>
#include<math.h>
void main()
{
  int n,a;
  printf("Enter a number :");
  scanf("%d",&n);
  a=cbrt(n);
  if(a*a*a==n)
  {
    printf("cube root of %d = %d\n",n,a);
  }
  else
  {
    printf("The number is not a perfect cube\n");
  }
  printf("\n");

}

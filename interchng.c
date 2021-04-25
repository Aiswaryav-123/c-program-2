#include<stdio.h>
void main()
{
  int a,b,s;
  printf("Enter the number a and b :");
  scanf("%d%d",&a,&b);
  s=a+b;
  a=s-a;
  b=s-b;
  printf("a = %d \n",a);
  printf("b = %d\n",b);
}

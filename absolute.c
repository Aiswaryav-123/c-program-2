//To find the the absolute value of a number
#include<stdio.h>
void main()
{
  float n,n2;
  printf("Enetr a number:");
  scanf("%f",&n);
  if(n>=0)
  {
      printf("The absolute value of %f is %f\n",n,n);
  }
  else
  {
      n2=n*-1;
      printf("The absolute value of %f is %f\n",n,n2);
  }
}

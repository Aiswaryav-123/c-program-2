// TO DETERMINE THE LARGEST AMONG 3 NUMBERS
#include<stdio.h>
int main()
{
  float a,b,c,x;
  printf("Enter 3 numners:");
  scanf("%f%f%f",&a,&b,&c);
  x=(a>b)?((a>c)?a:c):((b>c)?b:c);
  printf("Largest number is %f\n",x);
}

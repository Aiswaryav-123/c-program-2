//To check whether the area of the rectangle is greater than it's perimeter
#include<stdio.h>
void main()
{
  float l,b,a,p;
  printf("Enter length and breadth of the rectangle:");
  scanf("%f%f",&l,&b);
  a=l*b;
  p=2*(l+b);
  if(a>p)
  {
      printf("The area of the rectangle is greater than the perimeter\n");
  }
  else
  {
      printf("The area of the rectangle is not greater than the perimeter\n");
  }
}

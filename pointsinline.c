//To check if the given 3 points fall on one straight line
#include<stdio.h>
void main()
{
  float x1,y1,x2,y2,x3,y3,a,b;
  printf("Enter the 3 points:");
  scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
  a=(y2-y1)/(x2-x1);
  b=(y3-y2)/(x3-x2);
  if(a==b)
  {
      printf("The give 3 points are fall on one straight line\n");
  }
  else
  {
      printf("The given 3 points are does not  fall on one straight line\n");
  }
}

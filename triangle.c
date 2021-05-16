// TO CHECK WHETHER A TRIANGLE IS ISOSCELES, EQUILATERAL OR RIGHT ANGLED TRIANGLE
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter 3 sides of the triangle:");
  scanf("%d%d%d",&a,&b,&c);
  if(a==b && b==c && a==c)
  {
      printf("The given triangle is equilateral\n");
  }
  else if(a==b || b==c || a==c)
  {
      printf("The given triangle is isosceles\n");
  }
  else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
  {
      printf("The given triangle is right angled triangle\n");
  }
  else
  {
      printf("Normal triangle\n");
  }
}

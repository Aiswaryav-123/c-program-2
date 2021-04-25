//To check whether a triangle is valid or not
#include<stdio.h>
void main()
{
  float a,b,c,i;
  printf("Enter the angles of the triangle:");
  scanf("%f%f%f",&a,&b,&c);
  i=a+b+c;
  if(i==180)
  {
      printf("The thriangle with angle %f,%f,%f is valid\n",a,b,c);
  }
  else
  {
      printf("The thriangle with angle %f,%f,%f is not valid\n",a,b,c);
  }
}

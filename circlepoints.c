//To check whether a point lies inside,outside or on the circle
#include<stdio.h>
#include<math.h>
void main()
{
  float x,y,x1,y1,d,a,radius;
  printf("Enter the coordinates of the circle:");
  scanf("%f%f",&x,&y);
  printf("Enter the coordinates of the point to be check and radius:");
  scanf("%f%f%f",&x1,&y1,&radius);
  a=pow(x1-x,2)+pow(y1-y,2);
  d=sqrt(a);
  if(d==radius)
  {
      printf("The point is lies on the circle\n");
  }
  else if(d>radius)
  {
      printf("The point is lies outside the circle\n");
  }
  else 
  {
      printf("The point is lies inside the circle\n");
  }
}

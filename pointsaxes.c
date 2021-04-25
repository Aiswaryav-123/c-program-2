//To check if the point is lies on the x-axis,y-axis or on the origin
#include<stdio.h>
void main()
{
  float x,y;
  printf("Enter the coordinates of the point:");
  scanf("%f%f",&x,&y);
  if(x==0 && y==0)
  {
    printf("The point is at the origin\n");
  }
  else if(x==0 && y!=0)
  {
    printf("The point %f,%f is lies on the y axis\n",x,y);
  }
  else if(y==0 && x!=0)
  {
    printf("The point %f,%f is lies on the x axis\n",x,y);
  }
  else
  {
    printf("The point does not lie on x-axis or y-axis\n");
  }
}

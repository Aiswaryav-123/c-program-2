#include<stdio.h>
#include<math.h>
void main()
{
  float l1,l2,g1,g2,d;
  printf("Enter latitiude and longitude of the first place:");
  scanf("%f%f",&l1,&g1);
  printf("Enter latitiude and longitude of the second place:");
  scanf("%f%f",&l2,&g2);
  l1=l1*(3.14/180);
  l2=l2*(3.14/180);
  g1=g1*(3.14/180);
  g2=g2*(3.14/180);
  d=3963*acos((sin(l1)*sin(l2))+(cos(l1)*cos(l2))*(cos(g2-g1)));
  printf("distance = %f\n",d);
}

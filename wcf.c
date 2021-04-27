// To find wind chill factor
#include<stdio.h>
#include<math.h>
void main()
{
  float v,v1,temp,wcf;
  printf("Enter velocity and temperature:");
  scanf("%f%f",&v,&temp);
  v1=pow(v,0.16);
  wcf=35.74+(0.6215*temp)+((0.4275*temp)-35.75)*v1;
  printf("wind chill factor = %f\n",wcf);
}

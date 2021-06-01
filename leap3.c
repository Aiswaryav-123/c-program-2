#include<stdio.h>
int main()
{
  int y;
  printf("Enter the year:");
  scanf("%d",&y);
  y=((y%100==0 && y%400==0)||(y%100!=0 && y%4==0))?printf("%d is a leap year\n",y):printf("Not a leap year\n");
}

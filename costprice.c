#include<stdio.h>
void main()
{
  float cp,sp;
  printf("Enter the cost price and selling price of the item:");
  scanf("%f%f",&cp,&sp);
  if(sp>cp)
  {
      printf("The seller has made profit\n");
      printf("He made %f Rs profit\n",sp-cp);
  }
  else if(sp<cp)
  {
      printf("The seller has incurred loss\n");
      printf("%f Rs loss he incurred\n",cp-sp);
  }
  else
  {
      printf("No profit and no loss\n");
  }
}

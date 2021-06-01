/* PROGRAM TO ENTER NUMBERS TILL THE USERS WANTS.AT THE END, IT SHOULD
   DISPLAY THE COUNT OF POSITIVE, NEGATIVE AND ZEROS ENTERED */
#include<stdio.h>
int main()
{
  int n,i,a,positive=0,negative=0,zero=0;
  printf("Enter how many numbers: ");
  scanf("%d",&i);
  printf("Enter %d numbers : ",i);
  for(n=0;n<i;n++)
  {
    scanf("%d",&a);
    if(a>0)
    {
      positive++;
    }
    else if(a<0)
    {
      negative++;
    }
    else
    {
      zero++;
    }
  }
  printf("No.of positive numbers= %d\n",positive);
  printf("No.of negative numbers= %d\n",negative);
  printf("No.of zeros= %d\n",zero);
}

//
#include<stdio.h>
int main()
{
  int i;
  for(i=1;i<=12;i++)
  {
      if(i==12)
      {
          printf("%2d Noon\n",i);
      }
      if(i!=12)
      {
          printf("%2d AM\n",i);
      }

  }
  for(i=1;i<=12;i++)
  {
      if(i!=12)
      {
      printf("%2d PM\n",i);
      }
      if(i==12)
      {
          printf("%2d Midnight\n",i);
      }
  }
}

#include<stdio.h>
int main()
{
  int n,i;
  for(n=0;n<4;n++)
  {
      for(i=1;i<=7-(n*2);i++)
      {
          printf("&\t");
      }
      printf("\n");
      for(i=0;i<=n;i++)
      {
          printf("\t");
      }
  }
  printf("\n");
}

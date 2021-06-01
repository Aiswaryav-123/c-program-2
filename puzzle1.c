#include<stdio.h>
int main()
{
  int n=1,i,j,k,p;
  for(i=0;i<4;i++)
  {
      for(p=3;p>i;p--)
      {
          printf("\t");
      }
      for(j=0;j<n;j++)
      {
          if(i!=3)
          {
              if(j==0 || j==n-1)
              {
                    printf("&\t");
              }
              else
              {
                    printf("\t");
              }
          }
          else
          {
              printf("&\t");
          }
      }
      printf("\n");
      n+=2;
  }
  printf("\n");
}

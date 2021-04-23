#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    i=n/100;
    n=n%100;
    if(i!=0)
    {
      printf("%d x 100\n",i);
    }
    i=n/50;
    n=n%50;
    if(i!=0)
    {
      printf("%d x 50\n",i);
    }
    i=n/20;
    n=n%20;
    if(i!=0)
    {
      printf("%d x 20\n",i);
    }
    i=n/10;
    n=n%10;
    if(i!=0)
    {
      printf("%d x 10\n",i);
    }
    i=n/5;
    n=n%5;
    if(i!=0)
    {
      printf("%d x 5\n",i);
    }
    i=n/1;
    if(i!=0)
    {
      printf("%d x 1\n",i);
    }





}

#include<stdio.h>
void main()
{
    int i=1,fact=1,n;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        printf(" %d ",i);
        if(i!=n)
        {
        printf("X");
        }   
        i++;
    }
    printf(" = %d \n",fact);
}

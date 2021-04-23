#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,area,p,n;
    printf("Enter the lengths of sides of the triangle:\n");
    scanf("%f%f%f",&a,&b,&c);
    p=(a+b+c)*0.5;
    n=(p*(p-a)*(p-b)*(p-c));
    area=sqrt(n);
    printf("Area of the triangle = %f\n",area);
}

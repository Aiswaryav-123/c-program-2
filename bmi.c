#include<stdio.h>
int main()
{
  float w,h,h2,BMI;
  printf("Enter weight in kg and height in cm:");
  scanf("%f%f",&w,&h);
  h2=h/100;
  BMI=w/(h2*h2);
  printf("%f\n",BMI);
  if(BMI<15)
  {
      printf("Starvation\n");
  }
  else if(BMI>=15.1 && BMI<=17.5)
  {
      printf("Anorexic\n");
  }
  else if(BMI>=17.6 && BMI<=18.5)
  {
      printf("Underweight\n");
  }
  else if(BMI>=18.6 && BMI<=24.9)
  {
      printf("Ideal\n");
  }
  else if(BMI>=24 && BMI<=29.9)
  {
      printf("Overweight\n");
  }
  else if(BMI>=30 && BMI<=30.9)
  {
      printf("Obese\n");
  }
  else if(BMI>=40)
  {
      printf("Morbidly Obese\n");
  }
}

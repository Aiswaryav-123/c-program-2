/*TO CHECK WHETHER THE GIVEN CHARACTER IS CAPITAL LETTER, SMALL LETTER,
A DIGIT OR A SOCIAL SYMBOL
*/
#include<stdio.h>
int main()
{
  char b;
  printf("Enter a character:");
  scanf("%c",&b);
  if(65<=b && b<=90)
  {
      printf("The given character is a capital letter\n");
  }
  else if(97<=b && b<=122)
  {
      printf("The given charecter is a small letter\n");
  }
  else if(48<=b && b<=57)
  {
      printf("The given character is a digit\n");
  }
  else if(0<=b && b<=47 || 58<=b && b<=64 || 91<=b && b<=96 || 123<=b && b<=127)
  {
      printf("The given character is a special symbol\n");
  }
}

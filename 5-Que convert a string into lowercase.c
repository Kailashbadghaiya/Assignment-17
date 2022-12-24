#include<stdio.h>
#include<conio.h>

int main()
{
   char string[100];

   printf("Enter String : ");
   gets(string);

   strlwr(string);
   printf("\nString after strlwr : %s", string);

   return (0);
}

#include <stdio.h>
#include <string.h>
void main()
{
  char str[100],ch;
  int i,j,length;

       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
  length=strlen(str);

  for(i=1;i<length;i++)
    for(j=0;j<length-i;j++)
	if(str[j]>str[j+1])
	{
	  ch=str[j];
	  str[j] = str[j+1];
	  str[j+1]=ch;
	}
   printf("After sorting the string :");
   printf("%s\n",str);
  }


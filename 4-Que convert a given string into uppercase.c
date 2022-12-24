#include<stdio.h>
#include<stdio.h>
int main()
{
	int i=0;
	char str_char;
	char str[100];

	printf("\n Convert a string to uppercase. :\n");
    printf("-----------------------------------");
    printf("\n Input a string in lowercase : ");
    fgets(str, sizeof str, stdin);
    printf(" Here is the above string in UPPERCASE :\n ");
	while (str[i])
	{
		str_char=str[i];
		putchar (toupper(str_char));
		i++;
	}
	printf("\n\n");
	return 0;
}


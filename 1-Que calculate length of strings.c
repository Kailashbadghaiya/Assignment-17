#include<stdio.h>
#include<conio.h>
int main()
{
    char a1[20],a2[20] ;
    int i,length1=0,length2=0 ;

    printf("Enter 2 strings\n");
    gets(a1);
    fgets(a2,20,stdin);

    a2[strlen(a2)-1] = '\0' ;

    for(i=0;a1[i] != '\0';i++)
     length1++ ;
     for(i=0;a2[i] != '\0' ;i++)
        length2++;

     printf("length1 = %d\n",length1);
     printf("length2 = %d\n",strlen(a2));
}

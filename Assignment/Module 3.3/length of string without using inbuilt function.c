#include<stdio.h>
 
void main()
{
    char str[50];
    int i,length=0;
 
    printf("Enter a string \n");
    gets(str);
    for (i=0;str[i]!='\0';i++)
    {
        length++;
    }
    printf("Length of the String(%s) = %d\n",str,length);
}

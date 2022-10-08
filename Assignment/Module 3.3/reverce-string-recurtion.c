#include<stdio.h>
#include<string.h>
 
void rev(char [], int, int);
int main()
{
    char str[50];
    int value;
 
    printf("Enter The String: ");
    scanf("%s", str);
    value = strlen(str);
    rev(str, 0, value - 1);
    printf("The String After Reversing: %s\n", str);
    return 0;
}
 
void rev(char str[], int index, int value)
{
    char temp;
    temp = str[index];
    str[index] = str[value - index];
    str[value - index] = temp;
    if (index == value / 2)
    {
        return;
    }
    rev(str, index + 1, value);
}

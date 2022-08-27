# include<stdio.h>
int main() 
{
    int year;

    printf("Enter a Year: ");
    scanf("%d",&year);

    if (year%4==0 || year%400==0 && year%100!=0) 
    {
    	 printf("leap year");
    }
    else
    {
           printf("leap year not");	
     } 
     return 0;
}

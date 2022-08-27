# include<stdio.h>
int main() 
{
    float days,year,a,b,c,week;
    
   printf("Enter a no of year:\n ");
    scanf("%f",&year);
    b=year*365;
    printf("\n Enter a no of year:%f ",b);

    
    printf("\n Enter a no of days:");
    scanf("%f",&days);
    a=days/7;
    printf("\n Enter a no of days:%f ",a);
    
    printf("\n Enter a no of days:");
    scanf("%f",&days);
    c=days/7;
    printf("\n Enter a no of week:%f ",c);
}


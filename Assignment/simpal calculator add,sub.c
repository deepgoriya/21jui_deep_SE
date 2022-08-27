# include<stdio.h>
int main()
{
	int a,b;
	float c;
	printf("enter 2 value");
	scanf("%d %d",&a,&b);
	printf("\n add %d",a+b);
	printf("\n sub %d",a-b);
	printf("\n mul %d",a*b);
	c=a/b;
	printf("\n div %f",c);
	printf("\n mod %d",a%b);
}

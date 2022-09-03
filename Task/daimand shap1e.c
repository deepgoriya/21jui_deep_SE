#include<stdio.h>
int main()
{
	int a,b,c;
	for(a=1;a<=5;a++)
	{
		for(c=5;c>a;c--)
		{
			printf(" ");
		}
		for(b=1;b<=a;b++)
		{
			printf("%d ",b);
		}
			printf("\n");
	}
	for(a=5;a>=1;a--)
	{
		for(c=5;c>a;c--)
		{
			printf(" ");
		}
		for(b=1;b<=a;b++)
		{
			printf("%d ",b);
		}
			printf("\n");
	}
}


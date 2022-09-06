#include<stdio.h>
int main()
{
	int a=1,b=1,c=5;
	for(a=1;a<=5;a++)
	{
		for(c=5;c>=a;c--)
		{
			printf(" ");
		}
		for(b=1;b<=a;b++)
		{
			printf("%d ",b);
		}
		{
			printf("\n");
		}
	}
}

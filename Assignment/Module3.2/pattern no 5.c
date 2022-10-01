#include<stdio.h>
int main()
{
	int r,c,n=6;
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("1 ");
		}
		printf("\n");
	}
	n=5;
	for(r=1;r<=5;r++)
	{
		for(c=5;c>=r;c--)
		{
//			printf("1 ");
		}
//		printf("2 ");
	}
}

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter any 2 no:");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n value of A: %d \n value of B: %d",a,b);
}

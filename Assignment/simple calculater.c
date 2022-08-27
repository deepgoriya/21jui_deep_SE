#include<stdio.h>
int main()
{
	int a,b;
	float div;
	printf("enter any 2 no:");
	scanf("%d%d",&a,&b);
	printf("\n addition:%d",a+b);
	printf("\n subtraction:%d",a-b);
	printf("\n multiplication:%d",a*b);
	div=a/b;
	printf("\n division:%f",div);
	printf("\n modulo :%d",a%b);
}

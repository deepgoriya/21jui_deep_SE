#include<stdio.h>
int main()
{
	int a=0,b=1,n,i,j;
	printf("enter a no:");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		j=a+b;
		a=b;
		b=j;
		printf("%d\n",j);	
	}
	
}

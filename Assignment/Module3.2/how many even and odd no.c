#include<stdio.h>
int main()
{
	int i,j,k=0,no1=0,no2=0;
	int a[10],b[10];
	for(i=0;i<10;i++)
	{
		printf("enter value:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			no1+=a[i];
			printf("%d is even no \n",a[i]);
		}
		else
		{
			no2+=a[i];
			printf("%d is odd no \n",a[i]);
		}
	}
	printf("sum of even no: %d \n",no1);
	printf("sum of odd no: %d",no2);
}

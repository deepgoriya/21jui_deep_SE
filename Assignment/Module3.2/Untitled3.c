#include<stdio.h>
int main()
{
	int a[6],i,max,min;
	for(i=0;i<6;i++)
	{
		printf("enter value:");
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<6;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}		
		else if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nminimum is :%d \n",min);
	printf("maximum is :%d \n",max);
}

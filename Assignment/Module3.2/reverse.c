#include<stdio.h>
int main()
{
	int num,r,sum=0,t;
	printf("input a num:");
	scanf("%d",&num);
	for(t=num;num!=0;num=num/10)
	{
		r=num%10;
		sum=sum*10+r;
	}
	printf("the no is reverse is: %d \n",sum);
}

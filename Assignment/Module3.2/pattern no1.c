#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j%2==0)
				printf("1");
			else
				printf("0");
		 }
		printf("\n");
	}
}

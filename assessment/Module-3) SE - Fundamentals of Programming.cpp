#include<stdio.h>
void matrix()
{
    int a[2][2],b[2][2];
	int i,j;
	printf("\t\t\t\t\tMatrix Multiplication\n");
	printf("----------Matrix 1----------\n");
	for(i=0;i<2;i++)			//for matrix 1
		{
			for(j=0;j<2;j++)
			{
				printf("Enter element");
				scanf("%d",&a[i][j]);
			}
		}
	for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%d ",a[i][j]);
			}
				printf("\n");
		}
	printf("----------Matrix 2----------\n");
		
	for(i=0;i<2;i++)			//for matrix 2
		{
			for(j=0;j<2;j++)
			{
				printf("Enter element");
				scanf("%d",&b[i][j]);
			}
		}
	for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%d ",b[i][j]);
			}
				printf("\n");
		}
		
	printf("----------Result : Multiplication Matrix ----------\n");
		
			for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%d ",a[i][j]*b[i][j]);
			}
			printf("\n");
		}
}
int main()
{
	
	matrix();
}

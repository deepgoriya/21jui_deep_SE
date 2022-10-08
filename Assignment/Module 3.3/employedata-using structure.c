#include<stdio.h>
struct data
{
	char name[10];
	char adrs[10];
	int age;
};

void main()
{
struct data ob[10];
int a;
	for(a = 0;a<5;a++)
	{
		printf("Employ no: %d \n",a+1);
		printf("Employ name:");
		scanf("%s",&ob[a].name);
		printf("Employ address:");
		scanf("%s",&ob[a].adrs);
		printf("Employ Age");
		scanf("%s",&ob[a].age);
	}
	printf("\tEmploy no \tName \tAddress \tAge\n");
	for(a = 0;a<5;a++)
	{
		printf("\t%d",a+1);
		printf("\t\t%s",ob[a].name);
		printf("\t%s",&ob[a].adrs);
		printf("\t\t%s\n",&ob[a].age);
	}
	
}

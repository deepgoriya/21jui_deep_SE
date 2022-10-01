#include<stdio.h>
int main()
{
	FILE *deep
	int i=1,no,ans;
	char str1[10];
	char str2[10];
	printf("Enter no:");
	scanf("%d",&no);
	fdeep=fopen("D:/Tops/DEMO.txt","r+");
	ans=no*i;
	fprintf(fdeep,"hello");
	fclose(fdeep);
	fdeep=fopen("D:/Tops/DEMO.txt","a");
	fscanf(fdeep,"%s",&str1);
	printf("%s",str1);
	fclose(fdeep);
}

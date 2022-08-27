#include<stdio.h>
int main()
{
	float p,r,t,si,pi,a,b;
	printf("enter principal= ");
	scanf("%f",&p);
	printf("enter rate= ");
	scanf("%f",&r);
	printf("enter time in year= ");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("\n print simpal intrest per year : %f",si);
	pi=si+p;
	a=pi/100*r;
	printf("\n print compount intrest per month : %f",a);
	return 0;
}

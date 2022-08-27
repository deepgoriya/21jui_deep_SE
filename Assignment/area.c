#include<stdio.h>
int main()
{
	float aera,r,l,h,t,rectangla,triangle;
	
	printf("enter any no of Aera");
	scanf("%f",&r);
	aera=3.14*r*r;
	printf("\n value of Aera :%f",aera);
	
	printf("\n enter any 2 no of rectangla:");
	scanf("%f %f",&l,&h);
	rectangla=l*h;
	printf("\n value of rectangla a:%f",rectangla);
	
	printf("\n enter any no of triangle");
	scanf("%f",&t);
	triangle=t*t*t;
	printf("\n value of triangle a:%f",triangle);	
}


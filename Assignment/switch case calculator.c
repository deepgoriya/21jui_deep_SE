#include<stdio.h>
int main()
{
	float a,b;
	char c;
	xyz:
	printf("\n enter any two number");
	scanf("%f %c %f",&a,&c,&b);
	
	switch(c)
	{
	
		case '+':
					printf("\n addition of a and b %f",a+b);
		break;
	
		case '-':
					printf("\nsubtraction of a and b %f",a-b);
		break;
	
		case '*':
					printf("\nmultiplication of a and b %f",a*b);
		break;
	
		case '/':
					printf("\ndivision of a and b %f",a/b);
		break;
		
		default:
					printf("char is not correct");	
	
    }
    goto xyz;
}

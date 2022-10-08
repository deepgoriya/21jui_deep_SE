 #include<stdio.h>
int main()
{

char x;
int a,b,no,result;

	printf("\n Enter choice '+','-','*','/'\n");
	scanf("%c",&x);
	printf("\n Enter value of a");	
	scanf("%d",&a);
	printf("\n Enter value of b");
	scanf("%d",&b);

switch(x)
{

	case '+':	
		result=a+b;
		break;
	case '-':
		result=a-b;
		break;
	case '*':
		result=a*b;
		break;
	case '/':
		result=a/b;
		break;
	default:
		printf("Invalid choice");
		break;
		
}

	printf("Result = %d",result);
	
}		

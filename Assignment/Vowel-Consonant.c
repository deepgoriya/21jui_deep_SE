#include<stdio.h>
int main()
{
	char d;
	printf("enter ");
	scanf("%c",&d);
	switch(d)
	{
		case 'A':
			printf("A is Vowel");
			break;
			
		case 'E':	
			printf("E is Vowel");
			break;
			
		case 'I':	
			printf("I is Vowel");
			break;
			
		case 'O':	
			printf("o is Vowel");
			break;
			
		case 'U':	
			printf("U is Vowel");
			break;
		
		case 'a':
			printf("a is vowel");
			break;
			
		case 'e':
			printf("e is vowel");
			break;
			
		case 'i':
			printf("i is vowel");
			break;
			
		case 'o':
			printf("o is vowel");
			break;
			
		case 'u':
			printf("u is vowel");
			break;			
			
		default: printf ("%c is consonant",d);
		break;
		
	
	}
}

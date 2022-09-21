#include<stdio.h>
int main()
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	if(a>0)
	{
		if(a%2==0)
		{
			printf("a is even");
		}
		else
		{
			printf("a is odd");
		}
		
	}
	else
	{
		printf("enter a valid number");
	}
}
#include<stdio.h>

void div(int a)
{
	if(a%3==0 && a%5==0)
	{
		printf("the number division by 3 & 5.");
	}
	else
	{
		printf("the number not division by 3 & 5.");
	}	
}
int main()
{
	int i;
	printf("enter the number =");
	scanf("%d",&i);
	div(i);
	
}

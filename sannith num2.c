#include<stdio.h>
void main()
{
	int num1,num2;
	printf("Enter any Two Numbers\n");
	scanf("%d %d", &num1,&num2);
	if (num1>num2)
	{
		printf("%d is bigger",num1);
	}
	else
	{
		printf("%d is bigger",num2);
	}
}

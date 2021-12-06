#include<stdio.h>
void main()
{
	int age;
	printf("Enter the age of the Voters\n");
	scanf("%d", &age);
	if(age>=18)
	{
		printf("Eligible for Vote");
	}
	else
	{
		printf("Not Eligible for Vote");
	}
}

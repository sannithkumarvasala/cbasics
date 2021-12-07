#include<stdio.h>
void main()
{
	int a;
	printf("Enter any Week day\n");
	scanf("%d",&a);
	if (a==1)
	{
		printf("%d is Monday", a);
		}
    else if (a==2)
    {
    	printf("%d is Tuesday", a);
	}
    else if (a==3)
    {
    	printf("%d is Wednesday", a);
	}
	else if (a==4)
	{
		printf("%d is Thursday", a);
	}
	else if (a==5)
	{
		printf("%d is Friday", a);
	}
	else if (a==6)
	{
		printf("%d is Saturday", a);
	}
	else if (a==7)
	{
		printf("%d is Sunday", a);
	}
	else
	{
		printf("%d is Invalid", a);
	}
}

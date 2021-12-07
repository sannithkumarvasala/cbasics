#include<stdio.h>
void main()
{
	int a;
	printf ("Enter Marks");
	scanf("%d", &a);
	if(a>=80)
	{
		printf("%d is A Grade", a);
	}
	else if(a>=70 && a<80)
	{
	    printf("%d is B grade", a);
	}
	else if(a>=60 && a<70)
	{
		printf("%d is C grade", a);
	}
	else if(a>=50 && a<60)
	{
		printf("%d is D grade", a);
	}
	else
	{
		printf("%d is Fail", a);
	}
}

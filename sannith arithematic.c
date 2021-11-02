/* All arithematic Operations */
#include<stdio.h>
void main()
{
	int a, b, c, d;
	float e;
	
	a = 16;
	b = 5;
	
	c = a+b;
	d = a-b;
	e = a*1.0/b;

	printf("sum of %d and %d is: %d", a, b, c);
	printf("\ndifference of %d and %d is: %d", a, b, d);
	printf("\ndivision of %d and %d is: %f", a, b, e);
	printf("\nsum of %d and %d is: %d \ndifference of %d and %d is: %d \nproduct of %d and %d is : %d", a,b,c,a,b,d,a,b,e);
}

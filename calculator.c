#include<stdio.h>
void main ()
{
char arithmetic;
int a,b;
printf("please enter any Arithmetic Operation Below"
"\n\nAddition for +\nSubtraction for -\n"
"Multiply for *\nDivision for /\n");
scanf("%c", &arithmetic);
printf("enter two values\n");
scanf("%d%d",&a,&b);
switch(arithmetic)
{
case '+': printf("Addition is :%d\n",a+b);
break;
case '-': printf("Subtraction is :%d\n", a-b);
break;
case '*': printf("Multiplication is :%d\n", a*b);
break;
case '/': printf("Division is :%d\n", a/b);
break;
case ' ': printf("invalid arithmetic operation");

}

}
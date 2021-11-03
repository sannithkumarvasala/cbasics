#include<stdio.h>
void main()
{
     int total_min1, total_min2, hr1, hr2, min1, min2;
     total_min1 =100;
     total_min2 =500;
     hr1 = total_min1/60;
     hr2 = total_min2/60;
     min1 = total_min1%60;
     min2 = total_min2%60;
     
     printf("%d hour(s),%d minutes(s)", hr1, min1);
     printf("\n%d hour(s),%d minute(s)", hr2, min2);
}

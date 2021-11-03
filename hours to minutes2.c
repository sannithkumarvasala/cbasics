#include<stdio.h>
void main()
{
     int hour, hr2, minute, min2, minutes, mins2;
     hour = 9;
     minute = 10;
     hr2 = 10;
     min2 = 59;
     minutes = hour*60+minute;
     mins2 = hr2*60+min2;
     printf("%d minutes\n %dminutes", minutes, mins2);

}
